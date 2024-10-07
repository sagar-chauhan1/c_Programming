#include<stdio.h>
int main()
{   
    int n1;
    printf("enter 1 num");
    scanf("%d",&n1);
    char op;
    printf("char");
    scanf(" %c",&op);
    int n2;
    printf("enter 2 num");
    scanf("%d",&n2);
   if (op=='+') {
       op=n1+n2;
       printf("%d",op);
   }
   else if(op=='-') {
       op=n1-n2;
       printf("%d",op);
   }
   else if(op=='*') {
        op=n1*n2;
       printf("%d",op);
   }
   else if(op=='/'){
       op=n1/n2;
  printf("%d",op);
   }
    else {
        printf("invisubal");
    }
    
}