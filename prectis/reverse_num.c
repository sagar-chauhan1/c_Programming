#include<stdio.h>

int a,x,s=0;
void main() {
    
    printf("Enter a Number : ");
    scanf("%d",&a);
    
    while(a!=0){
        
        x = a%10;
        s = (s*10)+x;
        a = a/10;
    }
    printf("reverse number  %d",s);
}