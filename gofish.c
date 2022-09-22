#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define END "-9999"  

// int sum(int curSum, int nextNum);
// int concatenate(char *cur[],char *new[]);

//================================================

int main(int argc, char *argv[]){
    int i= 0;
    int intArr[25];
    char strArr[25];
    char input[100];

    while(strcmp(input, END)!=0){
        
        printf("Enter a number: ");
        scanf("%s", &input[i]);
        
        strcpy(strArr,input);
        i++;
        

    }
}

//================================================
/*
int sum(int curSum, int nextNum){
    curSum += nextNum;
}

int concatenate(char[] cur,char[] new){

}
*/