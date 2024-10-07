#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char fname[8];
    char lname[8];
};
void fum(struct student*);
void fum(struct student* ptr)
{
    printf("%d\t",ptr->roll);
    printf("%s\t",ptr->fname);
    printf("%s",ptr->lname);
}
void main()
{   
    struct student s1;
    printf("enter the roll : ");
    scanf("%d",&s1.roll);
    printf("enter the fname : ");
    scanf("%s",&s1.fname);
    printf("enter the lname : ");
    scanf("%s",&s1.lname);
    fum(&s1);
}