#include<stdio.h>

int r,i;
int s=1;
void main(){

    printf("Enter a number: ");
    scanf("%d",&r);

    for(i=r;i>=1;i--){
        s = s*i; 
    }
    printf("%d",s);
}