#include<stdio.h>
void fun(int, int);
void fun(int s,int n)
{   
    for(n=1;n<=10;n++)
    {
   int  c=s*n;
    printf("%d*%d=%d\n",s,n,c);
    }
}
int main()
{
    int s,n;
    printf("enter the num");
    scanf("%d",&s);
    fun(s,n);
}