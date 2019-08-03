#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	puts("Hello world!");
	
	char fname[50];
	char lname[50];
	int age;
	
	printf("What is your first name? ");
	scanf("%s", fname);

	printf("What is your last name? ");
	scanf("%s", lname);

	printf("How old are you? ");
	scanf("%i", &age);
	
	printf("Hello %s %s, of age %i, it is nice to meet you.\n", fname, lname, age);
	
	return 0;
}