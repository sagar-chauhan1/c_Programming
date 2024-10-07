#include<stdio.h>
int main()
{
    char r;
    printf("enter the character : ");
    scanf("%c",&r);
    if (r=='A' || r=='E'|| r=='I' || r=='O' || r=='U'|| r=='a'|| r=='e'|| r=='i' || r=='o' || r=='u')
    {
        printf("it is a vowel");
    }
    else
    {
        printf("it is a consonant");
    }
    return 0;
}