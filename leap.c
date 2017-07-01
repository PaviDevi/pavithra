#include<stdio.h>
int main()
{
int n;
clrscr();
printf("enter the year\n");
scanf("%d",&n);
if(n%4==0)
printf("%d is a leapyear",n);
else
printf("%d is a notleapyer",n);
return 0;
}
