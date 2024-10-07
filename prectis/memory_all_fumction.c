#include<stdio.h>
#include<stdlib.h>
void num(int* ,int, int);
void num(int* ptr, int n, int i)
{   
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not allocated.");
        exit(0);
    }
    else{
        printf("memory successfuly allocated to malloc.\n");
        for(i=0;i<n;i++)
        {
            ptr[i]=i+1;
        }
        printf("memory allocated:");
        for(i=0;i<n;i++)
        {
            printf("%d",ptr[i]);
        }
    }
}
void main()
{   
    int* ptr;
    int n=3,i;
    num(ptr,n,i);
}