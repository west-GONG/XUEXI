/*
#include <stdio.h>
 
int main()
{
   char str[1000], ch;
   int i, frequency = 0;
 
   printf("输入字符串: ");
   fgets(str, (sizeof str / sizeof str[0]), stdin);
 
   printf("输入要查找的字符: ");
   scanf("%c",&ch);
 
   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++frequency;
   }
 
   printf("字符 %c 在字符串中出现的次数为 %d", ch, frequency);
 
   return 0;
}*/
/*
#include <stdio.h>
 
int main()
{
    char line[150];
    int i, vowels, consonants, digits, spaces;
 
    vowels =  consonants = digits = spaces = 0;
 
    printf("输入一个字符串: ");
    scanf("%[^\n]", line);
 
    for(i=0; line[i]!='\0'; ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++vowels;
        }
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        {
            ++consonants;
        }
        else if(line[i]>='0' && line[i]<='9')
        {
            ++digits;
        }
        else if (line[i]==' ')
        {
            ++spaces;
        }
    }
 
    printf("元音: %d",vowels);
    printf("\n辅音: %d",consonants);
    printf("\n数字: %d",digits);
    printf("\n空白符: %d", spaces);
 
    return 0;
}*/
#include<stdio.h>
#include <string.h>
 
int main()
{
    int i, j;
    char str[10][50], temp[50];
 
    printf("输入10个单词:\n");
 
    for(i=0; i<10; ++i) {
        scanf("%s[^\n]",str[i]);
    }
 
 
    for(i=0; i<9; ++i) {
        for(j=i+1; j<10 ; ++j)
        {
            if(strcmp(str[i], str[j])>0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
 
    printf("\n排序后: \n");
    for(i=0; i<10; ++i)
    {
        puts(str[i]);
    }
 
    return 0;
}