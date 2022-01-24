/*
#include <stdio.h>
int main()
{
    long long n;
    int count = 0;

    printf("输入一个整数: ");
    scanf("%lld", &n);
 
    while(n != 0)
    {
        // n = n/10
        n /= 10;
        count++;
    }

    printf("数字是 %d 位数。", count);
}*/
/*
#include <stdio.h>
 
int main()
{
    int base, exponent;
 
    long long result = 1;
 
    printf("基数: ");
    scanf("%d", &base);
 
    printf("指数: ");
    scanf("%d", &exponent);
 
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    printf("结果：%lld", result);
 
    return 0;
}*/
/*
#include <stdio.h>
 
int power(int n1, int n2);
 
int main()
{
    int base, powerRaised, result;
 
    printf("基数: ");
    scanf("%d",&base);
 
    printf("指数(正整数): ");
    scanf("%d",&powerRaised);
 
    result = power(base, powerRaised);
 
    printf("%d^%d = %d", base, powerRaised, result);
    return 0;
}
 
int power(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*power(base, powerRaised-1));
    else
        return 1;
}*/


//判断回文数如：n=1234321
/*
#include <stdio.h>
 
int main()
{
    int n, reversedInteger = 0, remainder, originalInteger;
 
    printf("输入一个整数: ");
    scanf("%d", &n);
 
    originalInteger = n;
 
    // 翻转
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }
 
    // 判断
    if (originalInteger == reversedInteger)
        printf("%d 是回文数。", originalInteger);
    else
        printf("%d 不是回文数。", originalInteger);
    
    return 0;
}*/
//判断素数
/*
#include <stdio.h>
 
int main()
{
    int n, i, flag = 0;
 
    printf("输入一个正整数: ");
    scanf("%d",&n);
 
    for(i=2; i<=n/2; ++i)
    {
        // 符合该条件不是素数
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
 
    if (flag==0)
        printf("%d 是素数",n);
    else
        printf("%d 不是素数",n);
    
    return 0;
}*/