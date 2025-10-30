#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char s1[21] = "abc";
    char s2[21] = "abc";

    if(strcmp(s1, s2) == 0)
        printf("same");
    
    return 0;    
    }