#include <stdio.h>

int main(){
    int i, j, k;
    float number;
    for(i=0;i<=11;i++){
        for(j=0;j<=12;j++){
            for(k=0;k<=13;k++){
                number++;
            }
        }
    }
    printf("%f", number);

    return 0;
}