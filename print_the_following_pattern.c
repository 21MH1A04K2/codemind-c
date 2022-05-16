#include<stdio.h>
int main()
{
int num,i,j;
scanf("%d",&num);
for(i=1;i<=num;i++){
for(j=1;j<=num;j++){
if(j==1||i==j||i==num)
printf("*");else
printf(" ");
}printf("
");
}
}