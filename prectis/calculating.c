// #include<stdio.h>
// void main()
// {
//     float p=3.14;
//     float r;
//     printf("enter a area : ");
//     scanf("%f",&r);
//     float ar=p*r*r;
//     printf("%f",ar); 
// }



//simpal interest
// #include<stdio.h>
// void main()
// {
//     int p;
//     printf("enter the kimat : ");
//     scanf("%d",&p);
//     int r;
//     printf("enter kamisan : ");
//     scanf("%d",&r);
//     int t;
//     printf("to year storej : ");
//     scanf("%d",&t);

//     int si=(p*r*t)/100;
//     printf("%d",si);
// }


//sides of a triangle
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the a : ");
    scanf("%d",&a);
    printf("enter the b : ");
    scanf("%d",&b);
    printf("enter the c : ");
    scanf("%d",&c);
    if((a+b>c) && (b+c>a) && (c+a>b))
    printf("it a triangle");
}

