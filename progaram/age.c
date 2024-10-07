#include<stdio.h>
int main()
{
    int age;
    printf("enter your age : ");
    scanf("%d",&age);
    char gender;
    printf("enter your gender");
    scanf(" %c",&gender);
    if(age>=60)
    {
        if (gender=='f')
        {
            printf("80 interest rate");
        }
        else
        {
            printf("20 interest rate");
        }
    }
    else 
    {
        printf("40 interest rate");
    }
    return 0;
}
