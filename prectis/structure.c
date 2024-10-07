// #include<stdio.h>
// #include<string.h>
// struct student
// {
//     int avg;
//     char name[8];
// };
// void main(){
//     struct student s1;
//     printf("enter the avg : ");
//     scanf("%d",&s1.avg);
//     printf("enter the name :");
//     scanf("%s",s1.name);
//     printf("%d\t%s",s1.avg,s1.name);
//     // printf("%s",s1.name);
// }

#include<stdio.h>
#include<string.h>
struct emp
{
    char name[8];
    int id;
    float salary;
};
void main()
{   
    struct emp s1;
    
    printf("enter the name : ");
    scanf("%s",&s1.name);
    printf("enter the id : ");
    scanf("%d",&s1.id);
    printf("enter the salary : ");
    scanf("%f",&s1.salary);
    printf("%s\t",s1.name);
    printf("%d\t",s1.id);
    printf("%f\t",s1.salary);
    
}