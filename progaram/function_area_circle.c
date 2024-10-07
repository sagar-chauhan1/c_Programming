#include<stdio.h>
int area();
int area()
{
    float a;
    float p=3.14;
    float r;
    for (int i=1;i<=5;i++)
    {
        printf("enter the area : ");
        scanf("%f",&r);
        a=p*r*r;
        printf("area of circle %f \n",a);
    }

}
void main()
{
    area();
}