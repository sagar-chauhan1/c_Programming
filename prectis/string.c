// #include<stdio.h>
// void main()
// {
//     char ch[5];
//     printf("enter the string : ");
//     scanf("%s",ch);
//     //gets(ch);
//     printf("%s",ch);
//     //puts(ch);
// }

// #include<stdio.h>
// void main()
// {
//     char name[10]="seed";
//     char a[10]={'p','u','n','e'};
//     printf("name :%s\n",name);
//     for(int i=0;i<10;i++)
//     {
//         printf("%c",a[i]);
//     }
//     printf("\nstring a:%s",a);
// }

// #include<stdio.h>
// void main()
// {
//     int i;
//     char a[10];
//     for(i=0;i<10;i++)
//     {
//         scanf(" %c",&a[i]);
//     }
//     a[i]='\0';
//     for(i=0;a[i]!='\0';i++)
//     {
//         printf("%c",a[i]);
//     }
// }


// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char s[5];
//     printf("enter a string");
//     scanf("%s",&s);
//     int len = strlen(s);
//     printf("length of string : %d",len);
// }


// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char s1[14],s2[14];
//     strcpy(s2,strcpy(s1,"sagar chauhan"));
//     printf("s1 string %s\n",s1);
//     printf("s2 string %s",s2);
// }

// #include<stdio.h>
// void main()
// {
//     char s1[15],s2[15],i;
//     printf("enter the string : ");
//     scanf("%s",&s1);
//     for(i=0;s1[i]!='\0';i++)
//     {
//         s2[i]=s1[i];
//     }
//     s2[i]='\0';
//     printf("string s2 : %s",s2);
// }


// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     // char str1[10]="sagar";
//     // char str2[10]=" chauhan";
//     char str1[10];
//     char str2[10];
//     printf("enter the 1name :");
//     scanf("%s",str1);
//     printf("enter the 2name :");
//     scanf("%s",str2);
//     strcat(str1,str2);
//     printf("%s",str1);
// }

// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     // char s1[10]="chauhan";
//     // char s2[10]="chauhan";
//     char s1[10],s2[10];
//     printf("enter the s1 name :");
//     scanf("%s",s1);
//     printf("enter the s2 name :");
//     scanf("%s",s2);
//     if(strcmp(s1,s2)==0)
//     {
//         printf("string 1 and 2 equal");
//     }
//     else
//     {
//         printf("string 1 and 2 not equal");
//     }
// }

#include<stdio.h>
#include<string.h>
void main()
{
    // char str[14]={"chauhan sagar"};
    char str[14];
    printf("enter the name : ");
    scanf("%s",&str);
    printf("string : %s\n",str);
    printf("reversing string : %s",strrev(str));
}