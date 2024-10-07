#include<stdio.h>
int number();
int number()
{   
    // white ritan no argayument
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("it is 0");
    }
    else 
    {
        printf("it is 1");
    }
}
void main()
{
    number();
}