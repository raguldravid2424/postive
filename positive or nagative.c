#include <stdio.h>
 
int main()
{
  int a;
 
  printf("Enter the value");
  scanf("%d", &a);
 
  if(a>1)
     printf("positive value");
  else if(a==0)
     printf("zero");
  else
     printf("negative value");

  return 0;
}
