#include <stdio.h>

int f(char *s, char *t);

int main(){
    int n;
    n = f("tuesday", "thursday");
    printf("%d\n", n); // should print 2
    return 0;
}

int f(char *s, char *t){
    char *p1, *p2;
    for(p1 = s; *p1 != '\0'; p1++){
        for(p2 = t; *p2 != '\0'; p2++)
            if (*p1 == *p2) break;
        if(*p2 == '\0') break;
    }
    return p1 - s;
}