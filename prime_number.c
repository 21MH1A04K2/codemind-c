#include<stdio.h>
int main()
{
int num,i=2,s;
scanf("%d",&num);
while(i<num){
if(num%i==0){
s=1;
}i++;
}if(s==1){
printf("not a prime");
}else{
printf("prime");
}
}