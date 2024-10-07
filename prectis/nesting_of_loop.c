// #include<stdio.h>
// void main()
// {
//     int a,b;
//     printf("enter a num :");
//     scanf("%d",&a);
//     for(int i=1;i<=10;i++)
//     {
//        b=a*i;
//        printf("%d*%d=%d\n",a,i,b);
//     }
// }

#include<stdio.h>
void main()
{   
    for(int a=2;a<=5;a++) //outer loop
    for(int i=1;i<=10;i++) //iner loop
    {
        int b=a*i;
        printf("%d*%d=%d\n",a,i,b);
    }
}