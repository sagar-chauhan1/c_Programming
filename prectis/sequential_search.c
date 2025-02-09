#include<stdio.h>

void fun(int a[],int r, int search){

    int i;

    for(i=0;i<r;i++){
        if(a[i]==search){
            printf("Number is found");
            break;
        }
    }
    if(i==r){
        printf("Number is not found");
    }
}

void main(){

    int a[20];
    int i,search,r;

    printf("Enter a renge :");
    scanf("%d",&r);
    printf("Enter a %d element in array ",r);
    for(i=0;i<r;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter a number to search: ");
    scanf("%d",&search);

    fun(a,r,search);
    
}