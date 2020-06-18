#include<stdio.h>
int result;
int main()
{
    printf("Enter the two numbers");
    scanf("%d %d",&a,&b);
    multiply(a,b);
   printf("%d",result);
}
int multiply(int a,int b)
{
    result=multiply(a*b);
    return result;
    
}