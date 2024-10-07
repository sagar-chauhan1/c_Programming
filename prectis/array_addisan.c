#include<stdio.h>
void main()
{
    int a[5];//={4,5,6,7,8};
    int b[5];//={3,4,5,6,7};
    for(int n=0;n<5;n++)
    {   
        printf("enter the num a and b:");
        scanf("%d %d",&a[n],&b[n]);
    }
    for(int i=0;i<5;i++)
    {   
        int c=a[i]+b[i];
        printf("%d+%d=%d\n",a[i],b[i],c);
    }
}