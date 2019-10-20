#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
  double i;
  double j;
  char *bug = NULL;
  bug = (char*)malloc(sizeof(char)*3);

  for(i=0; i<5; i++){
    j=i/2+i;
    printf("j is %lf \n", j);
  }

  strcpy(bug,"hi");
  printf("bug is %s \n", bug);

  return 0;
}
