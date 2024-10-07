#include<stdio.h>
int main()
{
    int num;
    printf("enter the num");
    scanf("%d",&num);
    int mut,sub;
    {
        for(mut=1;mut<=10;mut++)
        {
            sub=num*mut;
            printf("%d %d %d \n",num,mut,sub);
        }
    }
    return 0;
}