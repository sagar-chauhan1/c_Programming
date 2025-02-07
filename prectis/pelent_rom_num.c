#include<stdio.h>

int a,b,s=0,i;
void main(){

    printf("Enter a number: ");
    scanf("%d",&a);
    i=a;

    while(a!=0){
        b =a%10;
        s =(s*10)+b;
        a =a/10; 
    }
    if(i==s){
        printf("The Number is a palindrome : %d",i);
    }else{
        printf("The Number is not a palindrome : %d",i);
    }
}