// #include<stdio.h>
// void add(int ,int);
// void add(int a,int b)
// {   
//     int c;
//     c=a+b;
//     printf("%d",c);

// }
// void main()
// {   
//     int a;
//     printf("enter 1st num : ");
//     scanf("%d",&a);
//     int b;
//     printf("enter 2nd num : ");
//     scanf("%d",&b);
//     add(a,b);
// }


// #include<stdio.h>
// void swap(int ,int);
// void swap(int a,int b)
// {   
//     int c=a;
//     a=b;
//     b=c;
//     printf("after %d %d",a,b);

// }
// void main()
// {
//     int a;
//     printf("enter 1st num");
//     scanf("%d",&a);
//     int b;
//     printf("enter 2nd num");
//     scanf("%d",&b);
//     printf("befare %d %d\n",a,b);
//     swap(a,b);
    
// }

#include<stdio.h>
void swap(int* ,int*);
void swap(int* a,int* b)
{   
    int c=*a;
    *a=*b;
    *b=c;

}
void main()
{
    int a;
    printf("enter 1st num");
    scanf("%d",&a);
    int b;
    printf("enter 2nd num");
    scanf("%d",&b);
    printf("befare %d %d\n",a,b);
    swap(&a,&b);
    printf("after %d %d",a,b);
}

