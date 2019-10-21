#include<stdio.h>
double aver_age(double in1,double in2);

int main(void){
  double num1, num2;
  printf("number input :");
  scanf("%lf",&num1);
  printf("number input :");
  scanf("%lf",&num2);
  
  printf("ever : %f", aver_age(num1,num2));
  return 0;
}

double aver_age(double in1,double in2)
{
    double sum = (in1+in2)/2;
    return sum;
}
