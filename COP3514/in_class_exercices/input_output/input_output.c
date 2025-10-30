#include <stdio.h>

int main(){
    char str[1001];
    int i;
    FILE *fp = fopen("text.txt", "r");
    if(fp == NULL){
        printf("Error opening file.");
        return 1;
    }
    FILE *fp2 = fopen("text2.txt", "w");
    if(fp2 == NULL){
        printf("Error opening file.");
        return 1;
    }
    while (fgets(str, 1001, fp) != NULL){
        for(i = 0;str[i] != '\0';i++){
            if(str[i] == '\n') str[i] = ' ';
        }
        fputs(str, fp2);
    }
    
    fclose(fp);
    return 0;
}
