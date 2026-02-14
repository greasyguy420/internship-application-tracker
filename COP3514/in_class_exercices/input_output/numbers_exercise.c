#include <stdio.h>
#include <string.h>

void selection_sort(int a[], int n);

int main(){
    int numbers;
    int count = 0, j = 0;
    int lots_num[1000];

    FILE *fp = fopen("numbers.txt", "r");
	if(fp == NULL){
		printf("Error opening file.");
		return 1;
    }
    while(!feof(fp)&&!ferror(fp)){
        if(fscanf(fp, "%d", &numbers) == 1){
            lots_num[j] = numbers;
            count++;
            j++;
        }
    }
    
    selection_sort(lots_num, count);

    FILE *fp2 = fopen("sorted_numbers.txt", "w");
    if (fp2 == NULL){
    printf ("Error opening file\n");
    return 1;
}   
    int i;
    for(i = 0; i< count; i++){
        fprintf(fp2, "%d\n", lots_num[i]);
    }
    
    printf("Total number of integers: %d\n", count);
    fclose(fp);
    fclose(fp2);
    return 0;
}

void selection_sort(int a[], int n)
{
    int i, largest = 0, temp;
    if (n == 1)
        return;
    for (i = 1; i < n; i++)
        if (a[i] > a[largest])
    largest = i;
    if (largest < n - 1) {
        temp = a[n-1];
        a[n-1] = a[largest];
        a[largest] = temp;
}
selection_sort(a, n - 1);
}