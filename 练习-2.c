/*
#include<stdio.h>
int main()
{
    int number;
    printf("please enter a number");
    scanf("%d",&number);
    printf("your number is %d",number);
    return 0;
}*/
/*
int main()
{
    double d;
    printf("please enter a number");
    scanf("%le",&d);
    printf("d is :%le",d);
}*/
/*
#include <stdio.h>
#define MAX_ASCII 127
 
int main()
{
    char num,enter;
    int temp=1;
    for(;temp>0;)
    {
        printf("----------------------------\n");
        printf("|**      开始            **|\n");
        printf("|**ASCII  转  字符  按:1 **|\n");
        printf("|**字符   转  ASCII 按:2 **|\n");
        printf("|**      结束       按:0 **|\n");
        printf("----------------------------\n");
        scanf("%d",&temp);
        if(temp==1)
        {
            printf("请输入数值小于 %d 的任意字符：",MAX_ASCII);
            scanf("%d",&num);
            printf("ASCII为 %d ,对应的字符为 %c \n",num,num);
        }
        if(temp==2)
        {
            printf("输入一个字符: \n");     
            scanf("%c", &enter);      //回车键也算字符,所以这里使用其他变量替之.
            scanf("%c", &num);  
            printf("     %c 的 ASCII 为 %d    \n", num, num);
        }
    }
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
 
int main()
{
    char cLetter;
    int iInRange, iCheck, i, iLetter;
    i = 1;
    while (i)
    {
        printf("输入一个字母, 判断元音与辅音. 如果想退出,请输入“0”。\n");
        scanf("%c", &cLetter);
        getchar();
        printf("----------------------------------------------------------------------\n");
        iLetter = (int)cLetter;
        iCheck = isalpha(iLetter);
        if (iCheck)
        {
            iInRange = (cLetter == 'a') || (cLetter == 'e') || (cLetter == 'i') || (cLetter == 'o') || (cLetter == 'u') || (cLetter == 'A') || (cLetter == 'E') || (cLetter == 'I') || (cLetter == 'O') || (cLetter == 'U');
            if (iInRange)
            {
                printf("字母 %c 是元音字母!\n", cLetter);
                printf("----------------------------------------------------------------------\n");
                continue;
            }
            else
            {
                printf("字母 %c 是辅音字母!\n", cLetter);
                printf("----------------------------------------------------------------------\n");
                continue;
            }
        }
        else if (iCheck == 0)
        {
            if (iLetter != 48)
            {
                printf("Error input!\n");
                printf("----------------------------------------------------------------------\n");
                continue;
            }
            else if ((int)cLetter == 48)
            {
                printf("Bye bye~~~!\n");
                printf("----------------------------------------------------------------------\n");
                i = (int)cLetter - 48;
            }
        }
    }
    return 0;
}