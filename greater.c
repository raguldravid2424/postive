#include<stdio.h>
int main()
{
int d,e,f;
scanf("%d%d%d",&d,&e,&f);
if((d>e)&&(d>f))
printf("a is greater");
else if((e>d)&&(e>f))
printf("e is greater");
else
printf("f is greater");
}
