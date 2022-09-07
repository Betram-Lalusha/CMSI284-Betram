#include <stdio.h>
#include <stdlib.h>

int main() {
	char enteredName[10]; 
	printf("please enter your name!: \n");
	printf("\n");
    fgets(enteredName, 10, stdin);
    printf("\n");
    printf("    ");
    printf("Hello! %s ", enteredName);
    printf("\n");
}