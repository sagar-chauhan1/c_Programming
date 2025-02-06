#include<stdio.h>

int a = -1,b = 1;
int c,i;

void main(){
    int r;
    printf("Enter a range : ");
    scanf("%d",&r);

    for(i=0;i<r;i++){
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
    }
}