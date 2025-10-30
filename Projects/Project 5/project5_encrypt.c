#include <stdio.h>
#include <string.h>

/*Name: Joshua Smith
Program Description: This program takes in a message an then encrypts a message based off of a given date. 
Then, outputs the encrypted message.
*/

//Initialize the encrypt function
void encrypt(char *message, char *encrypted_message, int *date, int n);

int main(){
    //Initialize variables
    char message[1000], encrypted_message[1000];
    int i = 0, date[8], n = 8, ch;

    //Inputs message character array
    printf("Enter the message: ");
    while ((ch = getchar()) != '\n' && i < 1000) {
    message[i++] = ch;
}
    message[i] = '\0';

    //Input the date as an array of integers
    printf("Enter date in the format of 8 digits: ");
    for(i = 0; i < 8; i++){
        scanf("%1d", &date[i]);
    }

    encrypt(message, encrypted_message, date, n);
	
    printf("%s\n", encrypted_message);

    return 0;
}
//
void encrypt(char *message, char *encrypted_message, int *date, int n){
    char *p;
    int *q;
    int *start_date = date;
    //Loop through each character in the message
    for(p = message, q = date; *p != '\0';p++, encrypted_message++){
        //Encrypt the uppercase letters
        if(('A' <= *p) && (*p <= 'Z')){
            *encrypted_message = (*q + (*p - 'A')) % 26 + 'A';
            if(q - start_date < n - 1)
                q++;
            else
                q = start_date;
        }
        //Encrypt the lowercase letters
        else if(('a' <= *p) && (*p <= 'z')){
            *encrypted_message = (*q + (*p - 'a')) % 26 + 'a';
            if(q - start_date < n - 1)
                q++;
            else
                q = start_date;
        }
        //Don't change the non-alphabet chracters
        else
            *encrypted_message = *p;

    }
    //Add a null character to finish the loop
    *encrypted_message = '\0';
}
