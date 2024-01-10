#include<stdio.h>
void fun(int *n)
{
    *n=*n+1;
    printf("n=%d\n",*n);
}
int main()
{
    int n=10;
    printf("before fun call n=%d\n",n);//10
    fun(&n);//11
    printf("after fun call n=%d\n",n);//11
    fun(&n);//12
    fun(&n);//13
    return 0;
}