#include<stdio.h>
int swap(int*,int*);
int swap(int* a,int*b)
{   
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a=4;
    int b=5;
    printf("%d %d \n",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);
}