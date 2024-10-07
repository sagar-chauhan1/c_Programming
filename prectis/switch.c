#include<stdio.h>
void main()
{
    int a;
    printf("1-gujrati,2-hindi,3-ingish \n");
    printf("enter your coish : ");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
        printf("your coish is gujrati");
        break;
        case 2:
        printf("your coish is hindi");
        break;
        case 3:
        printf("your coish is inglish");
        break;
        default:
        printf("not coish");
        break;

    }
}