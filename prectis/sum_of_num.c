#include<stdio.h>

int s,r,t=0;
void main(){

    printf("Enter a Number : ");
    scanf("%d",&s);
    
    while (s!=0)
    {
        r=s%10;
        t=t+r;
        s=s/10;
    }
    printf("Sum of digits %d",t);
    
}