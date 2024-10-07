// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int n=3;
//     // int* ptr=(int*)malloc(n*sizeof(int));
    
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }  
// }


//2d array dynamic memory
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr[4][4];
    int* ptr;
    int n=3;
    for(int i=0;i<4;i++)
    {   
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    ptr=(int*) calloc (n,sizeof(int));
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
        printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
