#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum=0;
    for (int i=0;i<5;i++){
        sum=sum+n%10;
        n = n/10;
    }
    printf("%d",sum);
    
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}