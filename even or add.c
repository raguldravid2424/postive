#include<stdio.h>
int main(void)
{
int a;
printf("enter the number to check:");
scanf("%d",&a);
if(a%2==0)
{
printf("\n %d is an even number",a);
}
else
{
printf("\n %d is an odd number",a);
}
return 0;
}
