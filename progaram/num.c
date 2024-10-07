#include<stdio.h>
int main()
{
    int n;
    printf("enter the num");
    scanf("%d",&n);
    if (n>=80 && n<100)
    {
        printf("very good");
    }
    else if(n>=50 && n<80)
    {
        printf("godd");
    }
    else
    {
        printf("bad");
    }
 return 0;
}