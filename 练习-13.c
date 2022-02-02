 /*
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
 
char* strconnect(char *str1,char *str2);
 
int main()
{
    char str1[20],str2[20];
    char *str;
    puts("请输入两个字符串，用回车分开:");
    scanf("%s%s", str1, str2);
    str=strconnect(str1,str2);
    puts("连接后的字符串为:");
    puts(str);
    return 0;
}
char* strconnect(char *str1,char *str2)
{
    char*str;
    str=(char*)malloc(strlen(str1)+strlen(str2)+1);
    str[0]='\0';
    strcat(str,str1);
    strcat(str,str2);
    return str;
}*/
 //电话加密
 /*
#include <stdio.h>
 
int main()
{
    int a,i,aa[4],t;
    printf("请输入四位数字：");
    scanf("%d",&a);
    aa[0]=a%10;
    aa[1]=a%100/10;
    aa[2]=a%1000/100;
    aa[3]=a/1000;
    for(i=0;i<=3;i++)
    {
        aa[i]+=5;
        aa[i]%=10;
    }
    for(i=0;i<=3/2;i++)
    {
        t=aa[i];
        aa[i]=aa[3-i];
        aa[3-i]=t;
    }
    printf("加密后的数字：");
    for(i=3;i>=0;i--)
        printf("%d",aa[i]);
    printf("\n");
}*/
/*
 
#include<stdio.h>
#define N 10
int main()
{
    int a[N]={0,1,2,3,4,5,6,7,8,9};
    int i,t;
    printf("原始数组是:\n");
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    for(i=0;i<N/2;i++)
    {
        t=a[i];
        a[i]=a[N-1-i];
        a[N-1-i]=t;
    }
    printf("\n排序后的数组:\n");
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}*/

 
#include <stdio.h>
 
int main()
{
    int i=5;
    void palin(int n);
    printf("请输入5个字符\40:\40");
    palin(i);
    printf("\n");
}
void palin(n)
int n;
{
    char next;
    if(n<=1) {
        next=getchar();
        printf("相反顺序输出结果\40:\40");
        putchar(next);
    } else {
        next=getchar();
        palin(n-1);
        putchar(next);
    }
}