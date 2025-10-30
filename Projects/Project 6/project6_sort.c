/*


*/

#include <stdio.h>
#include <string.h>

void selection_sort(char items[][101], int n);

int main(int argc, char *argv[]){

    if (argc != 3) {
    printf("Invalid number of arguments\n");
    return 1;
}
    char items[1000][101];
    char *file_name = argv[1];
    char *output_file = argv[2];

    FILE *fp = fopen(file_name, "r");
    if(fp == NULL){
        printf("Error opening file.");
        return 1;
    }

    FILE *fp2 = fopen(output_file, "w");
    if (fp2 == NULL){
        printf ("Error opening file\n");
        return 1;
    }
    int i;
    for(i = 0; i < 1000; i++){
        char line[101];
        if(fgets(line, sizeof(line), fp) != NULL){
            line[strcspn(line, "\n")] = 0; // Remove newline character
            strcpy(items[i], line);
        } else {
            break;
        }
    }
    selection_sort(items, i);

    for (int j = 0; j < i; j++) {
        fprintf(fp2, "%s\n", items[j]);
    }

    fclose(fp);
    fclose(fp2);
    return 0;
}

void selection_sort(char items[][101], int n)
{
    if (n == 1) 
        return;
    int largest = 0;
    for (int i = 1; i < n; ++i) {
        if (strcmp(items[i], items[largest]) < 0)
            largest = i;
    }
    if (largest < n-1) {
        char temp[101];
        strcpy(temp, items[n-1]);
        strcpy(items[n-1], items[largest]);
        strcpy(items[largest], temp);
    }
    selection_sort(items, n-1);
}