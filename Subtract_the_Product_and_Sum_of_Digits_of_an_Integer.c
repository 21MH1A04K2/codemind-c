
#include<stdio.h>
int main()
{
    int n,sum=0,mul=1,res,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        mul=mul*r;
        n=n/10;
    }
    res=mul-sum;
    printf("%d",res);
    
    
}
