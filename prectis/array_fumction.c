// #include<stdio.h>
// void fun();
// void fun()
// {   
//     int arr[5]={9,3,7,4,4};
//     for(int i=0;i<5;i++)
//     {
//     int c=arr[i]*4;
//     printf("%d\t",c);
//     }
// }
// void main()
// {   
    
//     fun();
// }

// #include<stdio.h>
// void addisan(int[], int[]);
// void addisan(int a[], int b[])
// {   
//     for(int i=0;i<5;i++)
//     {
//     int c=a[i]+b[i];
//     printf("%d\t",c);
//     }
// }
// void main()
// {   
//     int a[5];
//     int b[5];
//     for(int i=0;i<5;i++)
//     {
//     printf("enter the num a and b : ");
//     scanf("%d %d",&a[i],&b[i]);
//     }
//     addisan(a,b);
// }


// array switch case fumction
#include<stdio.h>
void addisan(int[], int[]);
void addisan(int a[], int b[])
{   
    int ch;
    printf("1 add,2 sub,3 mul,4 div\n");
    printf("enter your choice :");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1: for(int i=0;i<5;i++)
    {
    int c=a[i]+b[i];
    printf("%d\t",c);
    } 
    break;
    case 2: for(int i=0;i<5;i++)
    {
    int c=a[i]-b[i];
    printf("%d\t",c);
    } 
    break;
    case 3: for(int i=0;i<5;i++)
    {
    int c=a[i]*b[i];
    printf("%d\t",c);
    } 
    break;
    case 4: for(int i=0;i<5;i++)
    {
    int c=a[i]/b[i];
    printf("%d\t",c);
    } 
    break;
    }
    
}
void main()
{   
    int a[5];
    int b[5];
    for(int i=0;i<5;i++)
    {
    printf("enter the num a and b : ");
    scanf("%d %d",&a[i],&b[i]);
    }
    addisan(a,b);
}







