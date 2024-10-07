#include<stdio.h>
int main()
{
 char ch;
 printf("Enter the character");
 scanf(" %c",&ch);
 if (ch>=48 && ch <=57)
 {
     printf("it is digit");
 }
 else
 {
     printf("it is some other character");
 }
 return 0;
}