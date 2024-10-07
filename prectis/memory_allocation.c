#include<stdio.h>
#include<stdlib.h>
void main()
{
    int* ptr;
    int n,i;
    printf("enter the memory :");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not allocated.");
        exit(0);
    }
    else
    {
        printf("memory successfully alocated using malloc.\n");
        for(i=0;i<n;i++)
        {
            ptr[i]=i+1;
        }
        printf("the elements of the array are:");
        for(i=0;i<n;i++)
        {
            printf("%d",ptr[i]);
        }
    }
}


// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//     int* ptr;
//     int n,i;
//     printf("enter the memory : ");
//     scanf("%d",&n);
//     ptr = (int*) calloc (n,sizeof(int));
//     if(ptr==NULL)
//     {
//         printf("memory not allocated");
//         exit(0);
//     }
//     else
//     {
//         printf("memory successfully allocated using malloc\n");
//         for(int i=0;i<n;i++)
//         {
//             ptr[i]=i+1;
//         }
//         printf("the elements of the array are :");
//           for(int i=0;i<n;i++)
//             {
//                 printf("%d",ptr[i]);
//             }
//     }
// }

// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//     int* ptr;
//     int i;
//     int n;
//     printf("enter the memory : ");
//     scanf("%d",&n);
//     // n=4;
//     ptr = (int*)malloc(n*sizeof(int));
//     if(ptr==NULL)
//     {
//         printf("memory not allocated.");
//         exit(0);
//     }
//     else{
//         printf("memory successfully allocate to malloc.\n");
//         for(i=0;i<n;i++){
//         ptr[i]=i+1;
//         }
//         printf("memory allocate :");
//         for(i=0;i<n;i++)
//         {
//         printf("%d",ptr[i]);
//         }
//     }
//     // n=6;
//     int b;
//     printf("\nenter the new memory :");
//     scanf("%d",&b);
//     ptr=(int*) realloc (ptr,b*sizeof(int));
//     if(ptr==NULL)
//     {
//         printf("memory not allocated.");
//         exit(0);
//     }
//     else{
//         printf("memory successfully allocet to realloc.\n");
//         for(i=0;i<b;i++)
//         {
//             ptr[i]=i+1;
//         }
//         printf("memory allocat : ");
//         for(i=0;i<b;i++)
//         {
//             printf("%d",ptr[i]);
//         }
//     }
// }

// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//     int* ptr;
//     int n,i;
//     printf("enter the memory : ");
//     scanf("%d",&n);
//     ptr= (int*) calloc(n,sizeof(int));
//     if(ptr==NULL){
//         printf("memory not allocat.");
//         exit(0);
//     }
//     else{
//         printf("memory successfully allocated to calloc.\n");
//         for(i=0;i<n;i++)
//         {
//             ptr[i]=i+1;
//         }
//         printf("memory allocated : ");
//         for(i=0;i<n;i++)
//         {
//             printf("%d",ptr[i]);
//         }
//     }
//     printf("\n");
//     free(ptr);
    
//         printf("momery successfully free");
    
// }
