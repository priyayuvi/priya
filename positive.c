#include<stdio.h>
int main()
{
int n;
printf("enter a number:");
scanf("%d",&n);
if(n>0)
{
printf("\n positive");
}
else if(n<0)
{
printf("\n negative");
}
else
{
printf("\n zero");
}
return 0;
}
