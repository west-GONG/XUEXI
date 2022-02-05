/*
#include <stdio.h>
#include <math.h>
 
float calculateSD(float data[]);
 
int main()
{
    int i;
    float data[10];
 
    printf("输入10个元素: ");
    for(i=0; i < 10; ++i)
        scanf("%f", &data[i]);
 
    printf("\n标准偏差 = %.6f", calculateSD(data));
 
    return 0;
}
 
float calculateSD(float data[])
{
    float sum = 0.0, mean, standardDeviation = 0.0;
 
    int i;
 
    for(i=0; i<10; ++i)
    {
        sum += data[i];
    }
 
    mean = sum/10;
 
    for(i=0; i<10; ++i)
        standardDeviation += pow(data[i] - mean, 2);
 
    return sqrt(standardDeviation/10);
}*/
/*
#include <stdio.h>
 
int main(){
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
 
    printf("输入行数 ( 1 ~ 100): ");
    scanf("%d", &r);
    printf("输入列数 ( 1 ~ 100): ");
    scanf("%d", &c);
 
    printf("\n输入第一维数组的元素:\n");
 
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("输入元素 a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
 
    printf("输入第二维数组的元素:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("输入元素 a%d%d: ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }
 
    // 相加
 
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
 
    // 显示结果
    printf("\n二维数组相加结果: \n\n");
 
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
 
            printf("%d   ",sum[i][j]);
 
            if(j==c-1)
            {
                printf("\n\n");
            }
        }
    
    return 0;
}*/
/*
#include <stdio.h>
 
int main()
{
   int data[5], i;
   printf("输入元素: ");
 
   for(i = 0; i < 5; ++i)
     scanf("%d", data + i);
 
   printf("你输入的是: \n");
   for(i = 0; i < 5; ++i)
      printf("%d\n", *(data + i));
 
   return 0;
}*/
