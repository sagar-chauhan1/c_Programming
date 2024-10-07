// #include<stdio.h>
// void main()
// {
//     int a;
//     printf("enter the num : ");
//     scanf("%d",&a);
//     if((a%5==0) && (a%3==0))
//     {
//         printf("it is ok");
//     }
//     else 
//     {
//         printf("it is not ok");
//     }
// }


// #include<stdio.h>
// void main()
// {
//     char a;
//     printf("enter the chareter : ");
//     scanf(" %c",&a);
//     if (a=='A' || a=='a' || a=='E' || a=='e' || a=='I' || a=='i' || a=='O' || a=='o' || a=='U' || a=='u')
//     {
//         printf("it is vovel");
//     }
//     else
//     {
//         printf("it is cosonat");
//     }
// }

#include<stdio.h>
void main()
{
    int a;
    printf("enter the num : ");
    scanf("%d",&a);
    
    if((a%3==0 || a%5==0) && (a%7!=0))
    {
        printf("it is good");
    }
    else
    {
        printf("it is very godd");
    }
    
}