//n=135->1+27+125=153
//153=1+125+27=153
#include<stdio.h>
int main()
{
    int n,b,sum=0,reminder;
    printf("enter any number:");
    scanf("%d",&n);//135
    b=n;
    while(n>0)
    {
        reminder=n%10;//5,3
        sum=sum+reminder*reminder*reminder;//125+27+1
        n=n/10;
    }
    if(b==sum)
    {
        printf("armstrong");
    }
    else
    {
        printf("Not armstrong:");
    }
    return 0;

}