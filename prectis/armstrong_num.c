#include<stdio.h>

int x,a,b,c,y,z;
void main(){
    printf("Enter a number : ");
    scanf("%d",&x);

    a=x%10;
    b=x/10;
    c=b%10;
    y=b/10;

    z=(a*a*a)+(c*c*c)+(y*y*y);

    if(z==x){
        printf("it is Armstrong Number");
    }else{
        printf("it is not Armstrong Number");
    }
    
}