#include<stdio.h>
void main()
{
    int arr[10];//={1,2,3,4,5,6,7,8,9,10};
    for(int j=0;j<10;j++)
    {
    printf("enter the num : ");
    scanf("%d",&arr[j]);
    }
    for(int i=0;i<10;i++)
    
    if(arr[i]%2==0){
        printf("it is even %d",arr[i]);
        printf("\n");
    }
    
    else if(arr[i]%2!=0)
    {
    printf("it is odd %d",arr[i]);
    printf("\n");
    }
}

