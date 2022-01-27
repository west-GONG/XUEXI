/*
#include <stdio.h> 
#define N 10 
int main() 
{  
    int i,j,l; 
    for(i=1,j=1;i<=N;i++) 
    { 
        for(l=1;l<=i;l++,j++) 
            printf("%5d",j); 
        printf("\n"); 
    } 
    return 0; 
}*/
/*
#include <stdio.h>
int main()
{ 
  int blank, number, column, n;
  printf("请输入数字金字塔层数（小于50）:");
  scanf("%d", &n);
  //判断输出三角形中最大数的位数，即最后一行中间数的位数
  int count = 0;
  int x = 0;
  x = 2 * n - 1;//最后一行中间数数值
  while (x != 0)
  {
    x /= 10;
    ++count;
  }
  //输出
  for (column = 1; column <= n; column++)
  {
    for (blank = 1; blank < (n - column)*(count+1)+count; blank++)    printf(" ");//输出每行前部空格
    for (number = column; number < (2 * column); number++)//输出从小到大；例：123
    {
       if (number < 10&&count != 1)
       {
          printf("  %d", number);
       }
       else
       {
          printf(" %d", number);
       }
    }
    for (number -= 2; number >= column; number--)//输出从大到小；例：21
    {
       if (number < 10 && count != 1)
       {
          printf("  %d", number);
       }
       else
       {
          printf(" %d", number);
       }
    }
    printf("\n\n");
   }
 return 0;
}*/
/*
#include <stdio.h>
int main()
{
    int rows, coef = 1, space, i, j;
 
    printf("行数: ");
    scanf("%d",&rows);
 
    for(i=0; i<rows; i++)
    {
        for(space=1; space <= rows-i; space++)
            printf("  ");
 
        for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;
 
            printf("%4d", coef);
        }
        printf("\n");
    }
 
    return 0;
}*/
#include<stdio.h>
int main()
{
    int rows, i, j, space;
 
    printf("行数: ");
    scanf("%d",&rows);
 
    for(i=rows; i>=1; --i)
    {
        for(space=0; space < rows-i; ++space)
            printf("  ");
 
        for(j=i; j <= 2*i-1; ++j)
            printf("* ");
 
        for(j=0; j < i-1; ++j)
            printf("* ");
 
        printf("\n");
    }
 
    return 0;
}