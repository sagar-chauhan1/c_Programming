#include<stdio.h>
int main()
{   
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("it is even num");
    }
    else {
        printf("it is odd num");
    }
    
    return 0;
}