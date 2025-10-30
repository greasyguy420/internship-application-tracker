#include <stdio.h>
#include <string.h>

void encrypt(char *message, char *encrypted_message, int *date, int n);

int main(){
    //Initialize variables
    char message[1000], encrypted_message[1000];
    int i = 0, date[8], n = 8, ch;

    printf("Enter the message: ");
    while ((ch = getchar()) != '\n' && i < 1000) {
    message[i++] = ch;
}
    message[i] = '\0';

    printf("Enter the date in the format of 8 digits: ");
    for(i = 0; i < 8; i++){
        scanf("%1d", &date[i]);
    }
    while (getchar() != '\n'); //get rid of leftover newline

    encrypt(message, encrypted_message, date, n);
	
    printf("Encrypted message: %s\n", encrypted_message);

    return 0;
}

void encrypt(char *message, char *encrypted_message, int *date, int n){
    char *p;
    int *q;
    int *start_date = date;
    for(p = message, q = date; *p != '\0';p++, encrypted_message++){
        if(('A' <= *p) && (*p <= 'Z')){
            *encrypted_message = (*q + (*p - 'A')) % 26 + 'A';
            if(q - start_date > n - 1)
                q = start_date;
            else
                q++;
        }
        else if(('a' <= *p) && (*p <= 'z')){
            *encrypted_message = (*q + (*p - 'a')) % 26 + 'a';
            if(q - start_date > n - 1)
                q = start_date;
            else
                q++;
        }
        else
            *encrypted_message = *p;

    }
    *encrypted_message = '\0';
}