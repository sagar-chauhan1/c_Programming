// #include<stdio.h>
// int ret(int, int);
// int ret(int a,int b)
// {   
//     int c=a+b;
//     return c;

// }
// void main()
// {
//     int a;
//     printf("enter 1st num :");
//     scanf("%d",&a);
//     int b;
//     printf("enter 2nd num :");
//     scanf("%d",&b);
//     int sp=ret(a,b);
//     printf("%d",sp);
// }

// #include<stdio.h>
// int sum(int);
// int sum(int n)
// {
//     if(n==1) return 1;
//     return n+sum(n-1);
// }
// void main()
// {   
//     int n;
//     printf("enter the sum : ");
//     scanf("%d",&n);
//     int num=sum(n);
//     printf("%d",num);
// }

// #include<stdio.h>
// int fac(int);
// int fac(int i)
// {
//     if((i==0)||(i==1)) return 1;
//     return i*fac(i-1);
// }
// void main()
// {   
//     int i;
//     printf("enter the factoriyal : ");
//     scanf("%d",&i);
//     int num=fac(i);
//     printf("%d",num);
// }


#include<stdio.h>
int power(int, int);
int power(int a,int b)
{    
    if(b==0) return 1;
    return a*power(a,b-1);
}
void main()
{
    int a;
    printf("enter the num : ");
    scanf("%d",&a);
    int b;
    printf("enter the power : ");
    scanf("%d",&b);
    int num=power(a,b);
    printf("%d",num);
}