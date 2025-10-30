#include <stdio.h>
//Name: Joshua Smith
//Summary: Checks if a command line argument includes a valid password: only alphabet or digit, 8 or more characters,
//must have at least one one upper case letter and one lower case letter.
int main(int argc, char* argv[])
{	//Initialize variables
	char *ch;
	int is_upper = 0;// Added a flag to state that before checks there are no uppercase letters.
	int is_lower = 0;// Added a flag to state that before checks there are no lowercase letters.
	int is_valid = 1;
	int count = 0;
	//Checks if there is two arguments or not.
	if(argc != 2) printf("Invalid number of arguments\n");
	//Iterates through the second argument to check if it is a valid password.
	else{
	ch = argv[1];
	while(ch[count] != '\0'){
	
	if(!((ch[count] >='a'&& ch[count]<='z') ||(ch[count]>='A'&&ch[count]<='Z') || (ch[count]>='0' && ch[count]<='9')))
		is_valid = 0;
	if(ch[count] >='A'&& ch[count]<='Z') //If the program detects an uppercase letter, then the is_upper flag gets changed to True.
		is_upper = 1;
	if(ch[count] >='a'&& ch[count]<='z') //If the program detects an lowercase letter, then the is_lower flag gets changed to True.
		is_lower = 1;	
	   count++;	
	}
	if(!(is_upper && is_lower) || (count < 8)) 
		is_valid =0; //Combined the logic so that if the password isn't valid then is_valid changes 
	if(is_valid) printf("Valid\n");
	else printf("Invalid\n");

	}
	
	
			
	return 0;
}
