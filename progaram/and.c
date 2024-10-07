#include<stdio.h>
int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    if ( (num>=1) && (num<=100) )
    {
        printf("in range");
    }
    else
    {
        printf("not in range");
    }
    return 0;
}