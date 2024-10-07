#include<stdio.h>
#include<stdlib.h>
void displaymatrix(int**, int,int);
void acceptmatrix(int**,int,int);
void acceptmatrix(int **mat, int rows,int cols)
{
    int row,col;
    for(row =0;row<rows;row++)
    {
        for(col=0;col<cols;col++)
        {
            scanf("%d",(*(mat + row)+col));
        }
    }
}
void displaymatrix(int **mat,int rows,int cols)
{
    int row,col;
    for(row=0;row<rows;row++)
    {
        for(col=0;col<cols;col++)
        {
            printf("%d",*(*(mat+row)+col));
            printf("\n");
        }
    }
}
void main()
{
    int **mat,rows,cols,i;
    printf("how many rows? : ");
    scanf("%d",&rows);
    printf("how many cols? : ");
    scanf("%d",&cols);
    mat=(int**)malloc(rows*sizeof(int*));
    for(i=0;i<rows;i++)
    mat[i]=(int*)malloc(cols*sizeof(int));
    printf("\nenter elements for first matrix : %d",rows*cols);
    acceptmatrix(mat,rows,cols);
    printf("\nmatrix contains : \n");
    displaymatrix(mat,rows,cols);
    
}