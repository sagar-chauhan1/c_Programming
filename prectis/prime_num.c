#include<stdio.h>

void main(){
    int a,i;
    printf("Enter a number: ");
    scanf("%d",&a);

    for(i=2;i<a;i++){

        if(a%i==0){
            printf("%d is not a prime number",a);
            break;
        }
    }
    if(a==i){
        printf("%d is a prime number",a);
    }
}