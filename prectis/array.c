// #include<stdio.h>
// void main()
// {
//     int array[5]={8,6,4,7,8};
//     for(int i=0;i<5;i++)
//     {
//         printf("%d\t",array[i]);
//     }

// }

#include<stdio.h>
void main()
{
    int array[5]={4,5,6,7,8};
    for(int i=0;i<5;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    for(int i=4;i>=0;i--)
    {
        printf("%d\t",array[i]);
    }
}