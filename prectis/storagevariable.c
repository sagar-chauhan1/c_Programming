// #include<stdio.h>
// void main()
// {
//     auto int a; // and local value
//     printf("%d",a);
// }

// #include<stdio.h>
// void func();
// void func()
// {
//     static int a;
//     int b=1;
//     a++;
//     b++;
//     printf("a=%d \t b=%d\n",a,b);
// }
// void main()
// {
//     func();
//     func();
//     func();
// }

#include<stdio.h>
void add();
void add1();
// extern 
int x=10;  //global variable
// extern 
int y=20;
void add()
{
    int y=100;
    printf("%d\n",y);
    printf("%d & %d",x,y);
}
void add1()
{
    printf("\n%d",x);
    printf("\n%d",y);
}
void main()
{   
    int x=100;
    printf("%d\n",x);
    printf("%d\n",y);
    add();
    add1();
}
