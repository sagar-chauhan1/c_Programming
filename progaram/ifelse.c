#include<stdio.h>
int main()
{
    int mark;
    printf("enter your mark:");
    scanf("%d",&mark);
    if (mark>=60)
    {
        printf("you are eligible");
    }
    else
    {
        printf("you are not eligible");
    }
}