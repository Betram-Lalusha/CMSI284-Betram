#include <stdio.h>
 
int main()
{
    long input;
    long quotient;
    long remainder;
    int j = 0;
    char hexadec[100];
 
    printf("Enter an base-10 number to convert\n");
    scanf("%ld", &input);
 
    quotient = input;
 
    while (quotient!=0){
        remainder = quotient%16;
        if (remainder < 10)
            hexadec[j++] = 48+remainder;
        else
            hexadec[j++] = 55+remainder;
        quotient/=16;
    }
    
    printf("0x");

    for (int i = j;i >= 0;i--)
        printf("%c",hexadec[i]);
    return 0;
}