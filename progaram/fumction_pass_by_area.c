#include<stdio.h>
int pass(float,float);
int pass(float p,float r)
 //  for (int i=1;i<=5;i++)
    {   
        float a;
        a=p*r*r;
        printf("area of circle %f \n",a);
        
    }

int main()
{   
    float p=3.14;
    float r;
    printf("enter the radius : ");
    scanf("%f",&r);
    pass(p,r);

    printf("enter the radius : ");
    scanf("%f",&r);
    pass(p,r);

    printf("enter the radius : ");
    scanf("%f",&r);
    pass(p,r);
    
    return 0;
}