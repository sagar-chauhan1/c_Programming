#include<stdio.h>
#include<stdlib.h>
void main(){

    int *x = (int *) malloc (sizeof(int*));
    *x = 10;
    printf("%d \n",*x);

    int *y = (int *) calloc (6,sizeof(int *));
    *y = 20;
    *(y+2) = 30;
    printf("%d %d %d \n",*y,*(y+1),*(y+2));

    y = (int *) realloc (y,9);
    *(y+8) = 40;
    printf("%d",*(y+8));

    free(x);
    free(y);
}