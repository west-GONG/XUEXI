/*
#include <stdio.h>
#include <math.h>
 
int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);
 
int main()
{
    int n, flag;
 
    printf("输入正整数: ");
    scanf("%d", &n);
 
    // 检测素数
    flag = checkPrimeNumber(n);
    if (flag == 1)
        printf("%d 是素数。\n", n);
    else
        printf("%d 不是素数\n", n);
 
    // 检测 Armstrong 数
    flag = checkArmstrongNumber(n);
    if (flag == 1)
        printf("%d 是 Armstrong 数。", n);
    else
        printf("%d 不是 Armstrong 数。",n);
    return 0;
}
 
int checkPrimeNumber(int n)
{
    int i, flag = 1;
 
    for(i=2; i<=n/2; ++i)
    {
 
    // 非素数条件
        if(n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
 
int checkArmstrongNumber(int number)
{
    int originalNumber, remainder, result = 0, n = 0, flag;
 
    originalNumber = number;
 
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }
 
    originalNumber = number;
 
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }
 
    // 判断条件
    if(result == number)
        flag = 1;
    else
        flag = 0;
 
    return flag;
}*/
/*
#include <stdio.h>
int main()
{
    int low,high;
    scanf("%d %d",&low,&high);    
    while(low<=high)
    {
        if(arm(low)==1)    printf("%d \t",low);
        low++;
    }
    
}
 
int arm(int a)
{
    
    int b=0,c=0,e=0; //初始化 
    c=a;
    while(c>0)
    {
        if(c%10>=0) e++;
        c =c/10;
    }    
    c=a;
    while(a>0)
    {
        b=b+pow(a%10,e);
        a=a/10;
    }
    if(c==b) return 1;
    else return 0;
}*/
