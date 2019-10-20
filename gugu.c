#include<stdio.h>

int main(void){
  for(int i = 1; i < 10; i++){
    for(int d = 1; d < 10; d++){
      printf("%3d X %2d = %3d",d,i,d*i);
    } printf("\n");
  }
  printf("darong darong");
  return 0;
}
