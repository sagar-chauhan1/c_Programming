// #include<stdio.h>

//     enum week{Mon,Tue,Wed,Thur,Fri,Sat,Sun};
// void main()
// {
//     enum week day;
//     day = Sat;
//     printf("%d",day);   
// }

#include<stdio.h>
enum color{red=10,blue,pink};
void main()
{
    enum color bgcolor;
    bgcolor=red;
    switch(bgcolor)
    {
        case 10: printf("%d",bgcolor);
        break;
        case 11: printf("blue");
        break;
        case 12: printf("pink");
        break;
        default: printf("anvelide");
        break;
    }
}