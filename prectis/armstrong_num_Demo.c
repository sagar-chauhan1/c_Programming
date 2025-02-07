#include<stdio.h>

int i,j,a,b,s;
void main(){

    for(i=1;i<1000;i++){
        s=0;
        j=i;
        while(j!=0){
           a =j%10;
           s =s+(a*a*a);
           j =j/10;
        }
        if(i==s){
            printf("armstrong Number  :%d\n",s);
        }
    }
    
}