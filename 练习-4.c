/*
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    
    printf("输入一个正整数: ");
    scanf("%d",&n);
 
    for(i=1; i <= n;i++)
    {
        sum += i;   // sum = sum+i;
    }
 
    printf("Sum = %d",sum);
 
    return 0;
}*/
/*
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("输入一个正整数: ");
    scanf("%d",&n);
    i = 1;
    while ( i <=n )
    {
        sum += i;
        i++;
    }
    printf("Sum = %d",sum);
    return 0;
}*/
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
/*
#include <stdio.h>
int main()
{
    int num;
    printf("请输入一个自然数：");
    while (scanf("%d", &num) == 1)
    {
        printf("Sum = %d", (num + 1) * num / 2);
        break;
    }
    return 0;
}*/
/*
#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("输出几项: ");
    scanf("%d", &n);
    printf("斐波那契数列: ");
 
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}*/
/*
#include <stdio.h>
int main()
{
    int t1 = 0, t2 = 1, nextTerm = 0, n;
    printf("输入一个正数: ");
    scanf("%d", &n);
    // 显示前两项
    printf("斐波那契数列: %d, %d, ", t1, t2);
    nextTerm = t1 + t2;
    while(nextTerm <= n)
    {
        printf("%d, ",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }   
    return 0;
}*/
/*
#include <stdio.h> 
int main()
{
    int a,b;
    int t;
    scanf("%d %d", &a, &b);
    while (b !=0 ){
        t = a%b;
        a = b;
        b = t;
        printf("a=%d b=%d t=%d\n",a , b, t);
    }
    printf("最大公约数是%d\n", a);
    return 0;
}*/
