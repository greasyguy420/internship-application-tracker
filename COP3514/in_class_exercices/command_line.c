#include <stdio.h>
#include <string.h>

//compare if a command-line argument is one of the planets
int main(int argc, char *argv[])
{
    int i;
   char *planets[] = {"Mercury", "Venus", "Earth",
	                   "Mars", "Jupiter", "Saturn",
	                   "Uranus", "Neptune"};

   if(argc <2) printf("Usage: ./a.out planet.\n");
   else{	
   	for(i = 0; i<8; i++)
		if(strcmp(argv[1], planets[i])==0)  	
			break;		
  
  	 if(i<8)
 		printf("It is a planet\n");
	 else	printf("It is NOT a planet\n");
   }
   return 0;
}

