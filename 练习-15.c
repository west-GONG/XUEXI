/*
#include<stdio.h>
 
void cyclicSwap(int *a,int *b,int *c);
 
int main()
{
    int a, b, c;
 
    printf("输入 a, b 和 c 的值: ");
    scanf("%d %d %d",&a,&b,&c);
 
    printf("交换前:\n");
    printf("a = %d \nb = %d \nc = %d\n",a,b,c);
 
    cyclicSwap(&a, &b, &c);
 
    printf("交换后:\n");
    printf("a = %d \nb = %d \nc = %d",a, b, c);
 
    return 0;
}
void cyclicSwap(int *a,int *b,int *c)
{
 
    int temp;
 
    // 交换
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}*/
/*
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, num;
    float *data;
 
    printf("输入元素个数(1 ~ 100): ");
    scanf("%d", &num);
 
    // 为 'num' 元素分配内存
    data = (float*) calloc(num, sizeof(float));
 
    if(data == NULL)
    {
        printf("Error!!! 内存没有分配。");
        exit(0);
    }
 
    printf("\n");
 
    // 用户输入
    for(i = 0; i < num; ++i)
    {
       printf("输入数字 %d: ", i + 1);
       scanf("%f", data + i);
    }
 
    // 循环找出最大值
    for(i = 1; i < num; ++i)
    {
       // 如果需要找出最小值可以将 < 改为 > 
       if(*data < *(data + i))
           *data = *(data + i);
    }
 
    printf("最大元素 = %.2f", *data);
 
    return 0;
}*/
/*
#include <stdio.h>
int main()
{
    char s1[100], s2[100], i, j;
 
    printf("输入第一个字符串: ");
    scanf("%s", s1);
 
    printf("输入第二个字符串: ");
    scanf("%s", s2);
 
    // 计算字符串 s1 长度
    for(i = 0; s1[i] != '\0'; ++i);
 
    for(j = 0; s2[j] != '\0'; ++j, ++i)
    {
        s1[i] = s2[j];
    }
 
    s1[i] = '\0';
    printf("连接后: %s", s1);
 
    return 0;
}*/
