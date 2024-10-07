// #include<stdio.h>
// void main()
// {
//     int a=3;
//     for(int i=1;i<=a;i++)    //row
//     {
//         for(int i=1;i<=a;i++) //col
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// void main()
// {
//     int a;
//     printf("enter the row : ");
//     scanf("%d",&a);
//     int b;
//     printf("enter the col : ");
//     scanf("%d",&b);
//     for(int i=1;i<=a;i++)
//     {
//         for(int j=1;j<=b;j++)
//         {
//              printf("*");
//         }
//         printf("\n");
//     }

// }

// #include<stdio.h>
// void main()
// {
//     int a=4;
//     for(int i=1;i<=a;i++)
//     {
//         for(int j=1;j<=i;j++)
//         printf("*");
    
//     printf("\n");
//     }
// }


#include<stdio.h>
void main()
{
    int a;
    printf("enter the row : ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
       {
        printf("%d",j);
       }
       printf("\n");
    }
}


// #include<stdio.h>
// void main()
// {
//     int a;
//     printf("value of a :");
//     scanf("%d",&a);
//     int b=1;
//     for(int i=1;i<=a;i++)
//     {
//         for(int j=1;j<=i;j++)
//        {
//          printf("%d",b);
//          b++;
//        }
//        printf("\n");
//     }
// }

