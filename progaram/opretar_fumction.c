#include<stdio.h>
int num();
int num()
{   
    int n,s,x;
    char op;
    printf("enter the num 1 : ");
    scanf("%d",&n);
    printf("enter the opreter : ");
    scanf(" %c",&op);
    printf("enter the num 2 : ");
    scanf("%d",&s);
    if(op=='+')
    {
        x=n+s;
        printf("%d \n",x);
    }
    else if(op=='-')
    {
         x=n-s;
        printf("%d \n",x);
    }
    else if(op=='*')
    {
         x=n*s;
        printf("%d \n",x);
    }
    else if(op=='/')
    {
        x=n/s;
    }
    else {
        printf("not enter");
    }

    // x=n+s;
    // printf("%d \n",x);
    // x=n-s;
    // printf("%d \n",x);
    // x=n*s;
    // printf("%d \n",x);
    // x=n/s;
    // printf("%d \n",x);

}
void main()
{
    num();
   
}