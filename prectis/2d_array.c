// #include<stdio.h>
// void main()
// {
//     int arr[2][2]={{1,2},{3,4}};
//     for(int i=0;i<2;i++) //row
//     {
//         for(int j=0;j<2;j++) //col
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// void main()
// {   
//     int a;
//     printf("enter the row :");
//     scanf("%d",&a);
//     int b;
//     printf("enter the col :");
//     scanf("%d",&b);
//     int arr[a][b];
//     for(int i=0;i<a;i++) //row
//     {   
//     for(int j=0;j<b;j++) //col
//     {   
//         scanf("%d",&arr[i][j]);
//     } 
//     }  
//     printf("\n");
//     for(int i=0;i<a;i++)
//     {
//         for(int j=0;j<b;j++)
//         {      
//             printf("%d",arr[i][j]);
//         }
//         printf("\n");
//     }   
    
// }

//2d chareater print 
#include<stdio.h>
void main()
{
    char a[2][3];
    for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
    scanf(" %c",&a[i][j]);
    }
    }
    for(int i=0;i<2;i++)
    {   
        for(int j=0;j<3;j++){
        printf("%c",a[i][j]);
        }
        printf("\n");
    }
}
