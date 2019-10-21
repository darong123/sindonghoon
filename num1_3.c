#include<stdio.h>

int main(void){
  int a = 5;
  int b = 7;
  printf("a=%d,b=%d",a,b);
  int *num1 = &a;
  int *num2 = &b;
  int *temp = num1;
  num1 = num2;
  num2 = temp;
  printf("a=%d,b=%d",a,b);
  return 0;
}


