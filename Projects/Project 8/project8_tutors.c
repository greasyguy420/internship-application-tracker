/*Name: Joshua Smith
Summary: This program manages tutors profiles. Users can add, search, print, and clear tutor info*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define EMAIL_LEN 100
#define NAME_LEN 30
#define LEVEL_LEN 30

struct tutor{
	char first[NAME_LEN+1];
	char last[NAME_LEN+1];
	char email[EMAIL_LEN+1];
	int preferences[3];
	struct tutor *next;
};


struct tutor *add_to_list(struct tutor *list);
void search_list(struct tutor *list);
void print_list(struct tutor *list);
void clear_list(struct tutor *list);
int read_line(char str[], int n);

/**********************************************************
 * main: Prompts the user to enter an operation code,     *
 *       then calls a function to perform the requested   *
 *       action. Repeats until the user enters the        *
 *       command 'q'. Prints an error message if the user *
 *       enters an illegal code.                          *
 **********************************************************/
int main(){
  char code;

  struct tutor *tutor_list = NULL;  
  printf("Operation Code: a for adding to the list, s for searching"
	  ", p for printing the list; q for quit.\n");
  for (;;) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n')   /* skips to end of line */
      ;
    switch (code) {
      case 'a': tutor_list = add_to_list(tutor_list);
                break;
      case 's': search_list(tutor_list);
                break;
      case 'p': print_list(tutor_list);
                break;
      case 'q': clear_list(tutor_list);
		return 0;
      default:  printf("Illegal code\n");
    }
    printf("\n");
  }
}

//This function adds a tutor to the end of the linked list
struct tutor *add_to_list(struct tutor *list){
	struct tutor *cur, *new_node;
	new_node = malloc(sizeof(struct tutor));
	if (new_node == NULL) {
		printf("Database is full.\n");
		return list;
	}

	printf("Enter last name: ");
	read_line(new_node->last, NAME_LEN);
	printf("Enter first name: ");
	read_line(new_node->first, NAME_LEN);
  printf("Enter email address: ");
  read_line(new_node->email, EMAIL_LEN);
	printf("Enter preferences: ");
 	scanf("%d %d %d", &new_node->preferences[0], &new_node->preferences[1], &new_node->preferences[2]);
    for (cur = list; cur != NULL; cur = cur->next) {
      if (strcmp(cur->email, new_node->email) == 0 &&
          strcmp(cur->last, new_node->last) == 0) {
          printf("tutor already exists.\n");
          free(new_node);
          return list;
      }
  }
  new_node->next = NULL;
  if (list == NULL) {
      return new_node;
  }

  cur = list;
  while (cur->next != NULL) {
      cur = cur->next;
  }
  cur->next = new_node;
  return list;
}

//This function looks through the linked list for tutors that match the right level and prints them
void search_list(struct tutor *list){
    char level[LEVEL_LEN+1];
    int found = 0;
    struct tutor *p;
    printf("Enter level: ");
    read_line(level, LEVEL_LEN);
    for (p = list; p != NULL; p = p->next) {
        if (strcmp(level, "elementary") == 0 && p->preferences[0] == 1) {
            printf("%-12s%-12s%-30s\n", p->last, p->first, p->email);
            found = 1;
        }
        else if (strcmp(level, "middle") == 0 && p->preferences[1] == 1) {
            printf("%-12s%-12s%-30s\n", p->last, p->first, p->email);
            found = 1;
        }
        else if (strcmp(level, "high") == 0 && p->preferences[2] == 1) {
            printf("%-12s%-12s%-30s\n", p->last, p->first, p->email);
            found = 1;
        }
    }
    if (found == 0)
        printf("not found\n");
}

//This function prints the the information of all the tutors
void print_list(struct tutor *list){
	struct tutor *p;
  for (p = list; p != NULL; p = p->next) {
      printf("%-12s%-12s%-30s%5d%5d%5d\n", p->last, p->first, p->email, p->preferences[0], p->preferences[1], p->preferences[2]);
  }
}
//This function clears the linked list and deallocates the memory
void clear_list(struct tutor *list){
  struct tutor *p;
  while (list != NULL) {
    p = list;
    list = list->next;
    if (p != NULL)
      free(p);
  }
}

int read_line(char str[], int n)
{
  int ch, i = 0;
  while (isspace(ch = getchar()))
    ;
  str[i++] = ch;
  while ((ch = getchar()) != '\n') {
    if (i < n)
      str[i++] = ch;
   }
   str[i] = '\0';
   return i;
}