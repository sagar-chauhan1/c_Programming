#include<stdio.h>
int abc();
int abc()
{
    for(int i=1;i<=10;i++)
    
    if(i%2==0)
    {
        printf("number is even %d\n",i);
    }
    for(int s=1;s<=10;s++)
    if(s%2!=0)
    {
        printf("number is odd %d\n",s);
    }

}
void main()
{
    abc();
}