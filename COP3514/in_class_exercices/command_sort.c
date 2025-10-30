#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void selection_sort(int a[], int n);
int find_largest(int a[], int n);
int main(int argc, char *argv[]){
    int i;
    int a[argc-1];
    if(argc > 1){
        for(i = 0;i < argc - 1 ;i++){
            a[i] = atoi(argv[i+1]);
        }
    selection_sort(a, argc-1);

    for(i= 0; i < argc - 1; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    }
    else
    printf("Usage: ./a.out followed by numbers\n");
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
