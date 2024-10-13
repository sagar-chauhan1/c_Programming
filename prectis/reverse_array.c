#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int str[num]; 

    for(int i=0;i<num;i++){
    str[i]=*(arr+i); 
    }
    for(int i=(num-1);i>=0;i--){
    *(arr+i)=str[num-i-1];
    }
   
    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
