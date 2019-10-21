#include<stdio.h>

int main(void)
{
  int i = 1;
  int *pi = &i;
  for (int j = 0; j < 10; j ++)
  {
    for (int k = 0; k < 10; k ++)
    {
      printf("%2d ",i);
      *pi += 1;
    }printf("\n");
  }
  return 0;
}
