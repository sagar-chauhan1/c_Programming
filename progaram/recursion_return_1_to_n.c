#include<stdio.h>
int sum(int);
int sum(int n)
{   
    if(n==1) return 1;
    return n+sum(n-1);
    
}
void main()
{   
    int n;
    printf("enter sum num : ");
    scanf("%d",&n);
    int sp=sum(n);
    printf("%d",sp);
    
 }