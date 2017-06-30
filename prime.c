#include<stdio.h>
#include<conio.h>
int main()
{
int n,c;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
if(n==2)
printf("prime number\n");
else
{
for(c=2;c<=n;c++)
{
if(n%c==0)
break;
}
if(c!=n)
printf("not prime number\n");
else
printf("prime number\n");
}
return 0;
}
