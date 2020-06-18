#include<stdio.h>
int sum(int a,int b)
{
    return(a+b);
}
int main()
{
    int a=3,b=6,c;
    c=sum(a,b);
    printf("sum is %d",c);
    return 0;
}