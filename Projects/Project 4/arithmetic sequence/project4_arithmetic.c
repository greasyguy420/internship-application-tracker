#include <stdio.h>

int flag = 1;

int is_arithmetic_sequence(int *sequence,  int n);

int main(){
    int n, i;
    printf("Enter length of the sequence: ");
    scanf("%d", &n);
    int sequence[n];
    printf("Enter numbers of the sequence: ");
    for(i = 0; i < n; i++){
        scanf("%d", &sequence[i]);
    }

    flag = is_arithmetic_sequence(sequence, n);
    if(flag == 0)
    printf("no");
    else
    printf("yes");

    return 0;
}

int is_arithmetic_sequence(int *sequence,  int n){
    int *p;
    int *end = sequence + n;
    int diff = *(sequence + 1) - *sequence;
    for(p = sequence;p < end;p++){
        if(*p - *(p - 1) != diff) flag = 0;
    }
    return flag;
}