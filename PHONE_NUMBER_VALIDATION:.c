#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int len;
scanf("%s",str);
len=strlen(str);
if(str[0]!='0'&&len==10)
printf("Valid");
else
printf("Invalid");
}