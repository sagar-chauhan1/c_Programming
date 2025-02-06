#include <stdio.h>

int a,b,i;
int s=1; 
void main() {
    
    printf("Enter a coefficient: ");
    scanf("%d",&a); 
    printf("Enter a power: ");
    scanf("%d",&b);

    for(i=0;i<b;i++) {
        s = s * a; 
    }
    
    printf("%d ",s); 
}