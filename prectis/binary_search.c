#include <stdio.h>

void main() {
    
    int a[20]={3,4,5,10,20,21,23,32,36,38};
    int l=0,r=9,search,m;
    printf("Enter a sarch num :");
    scanf("%d",&search);
    
    while(l<=r){
        m = (l+r)/2;
        
        if(a[m]==search){
            printf("Number is found");
            break;
        }
        else if(a[m]>search){
            r = m-1;
        }
        else if(a[m]<search){
            l = m+1;
        }
    }  
    if(l>r){
          printf("Number is not found");  
        }
    
    
}