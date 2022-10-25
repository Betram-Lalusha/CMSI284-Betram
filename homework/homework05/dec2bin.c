#include <stdio.h>
int main(){
  int input;

  printf("Enter an base-10 number to convert\n");
  scanf("%d", &input);

  printf("%d's 32-bit binary value equivalent is\n", input);

  int k;
  for (int i = 31; i >= 0; i--){
    k = input >> i;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

  return 0;
}