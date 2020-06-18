#include<stdio.h>
int main()
{
    printf("Enter the two numbers");
    scanf("%d %d",&a,&b);
    multiply(a,b);
   printf("%d",result);
}
void multiply(int a,int b)
{
    result=a*b;
}