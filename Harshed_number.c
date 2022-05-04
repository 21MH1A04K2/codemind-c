#include<stdio.h>
int main()
{
int n,i,r,sum=0;
scanf("%d",&n);
i=n;
while(n!=0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
if(i%sum==0)
{
printf("True");
}
else
{
printf("False");
}
}