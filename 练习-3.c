/*
#include <stdio.h>
int main()
{
    double number;
 
    printf("输入一个数字: ");
    scanf("%lf", &number);
 
    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("你输入的是 0。");
        else
            printf("你输入的是负数。");
    }
    else
        printf("你输入的是正数。");
    return 0;
}*/
/*
#include <stdio.h>
 
int main()
{
    char c;
    printf("输入一个字符: ");
    scanf("%c",&c);
 
    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("%c 是字母",c);
    else
        printf("%c 不是字母",c);
 
    return 0;
}*/
//递归求和
/*
#include <stdio.h>
int addNumbers(int n);
 
int main()
{
    int num;
    printf("输入一个整数: ");
    scanf("%d", &num);
    printf("Sum = %d",addNumbers(num));
    return 0;
}
 
int addNumbers(int n)
{
    if(n != 0)
        return n + addNumbers(n-1);
    else
        return n;
}*/
//九九乘法表
/*
#include<stdio.h> 
 
int main(){  
    //外层循环变量,控制行  
    int i = 0;  
    //内层循环变量,控制列   
    int j = 0;   
    for(i=1;i<=9;i++){  
        for(j=1;j<=i;j++){  
            printf("%dx%d=%d\t",j,i,i*j);  
        }  
        //每行输出完后换行   
        printf("\n");     
    }  
}*/
//递归九九乘法表
/*
#include <stdio.h>
 
void func(int i, int j)
{
    if(i>j)
        return;
    printf("%dx%d=%d\t", i, j, i*j);
    func(i+1, j);
}
 
void f(int n)
{
    if(n==1)
        printf("1x1=1\n");
    else
    {
        f(n-1);
        func(1, n);
        putchar('\n');
    }
}
 
 
int main()
{
    f(9);
    return 0;
}*/