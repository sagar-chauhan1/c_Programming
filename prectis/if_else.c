// #include<stdio.h>
// void main()
// {
//     int a;
//     printf("enter the num : ");
//     scanf("%d",&a);
//     if(a%2==0)
//     {
//         printf("it is even");
//     }
//     else
//     {
//         printf("it is odd");
//     }
// }

// #include<stdio.h>
// void main()
// {
//     for(int i=1;i<=10;i++)
//     if(i%2==0)
//     {
//         printf("it is even %d \n",i);
//     }
//     else if(i%2!=0)
//     {
//         printf("it is odd %d \n",i);
//     }
// }

// #include<stdio.h>
// void main()
// {
//     int a,b,c;
//     printf("enter the a : ");
//     scanf("%d",&a);
//     printf("enter the b : ");
//     scanf("%d",&b);
//     printf("enter the c : ");
//     scanf("%d",&c);
//     if(a>b && a>c)
//     {
//         printf("a is gretest");
//     }
//     else if(b>a && b>c)
//     {
//         printf("b is gretest");
//     }
//     else if(c>a && c>b)
//     {
//         printf("c is gretest");
//     }
// }

#include<stdio.h>
void main()
{
    int a;
    printf("enter 1st num : ");
    scanf("%d",&a);
    char ch;
    printf("enter character : ");
    scanf(" %c",&ch);
    int b;
    printf("enter 2nd num : ");
    scanf("%d",&b);
    if(ch=='+')
    {
        ch=a+b;
        printf("%d",ch);
    }
    else if(ch=='-')
    {
        ch=a-b;
        printf("%d",ch);
    }
    else if(ch=='*')
    {
        ch=a*b;
        printf("%d",ch);
    }
    else if(ch=='/')
    {
        ch=a/b;
        printf("%d",ch);
    }
    else
    {
        printf("invelid character");
    }

}