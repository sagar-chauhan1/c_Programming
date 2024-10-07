#include<stdio.h>
void fun();
void fun()
{   
    int a,b,c;
    printf("enter the num : ");
    scanf("%d",&a);
    printf("enter the num : ");
    scanf("%d",&b);
    c=a+b;
    printf("%d",c);
}
int main()
{
    fun();
    return 0;
}
