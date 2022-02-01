/*
#include<stdio.h>
 
int c = 0;
int i = 1;
int j = 0;
int a[30] = { 0 };
int b[30] = { 0 };
 
int main()
{
    while (i<=31)
    {
        if (i == 31)
        {
            i = 1;
        }
        else if (c == 15)
        {
            break;
        }
        else
        {
            if (b[i] != 0)
            {
                i++;
                continue;
            }
            else
            {
                j++;
                if (j != 9)
                {
                    i++;
                    continue;
                }
                else
                {
                    b[i] = 1;
                    a[i] = j;
                    j = 0;
                    printf("第%d号下船了\n", i);
                    i++;
                    c++;
                }
            }
        }
    }
}*/
#include <stdio.h>
 
#define WAN 10000
 
int main()
{
    double I = 0; // 利润
    double B = 0; // 奖金
    
    scanf("%lf", &I);
    I /= WAN;
 
    if (I > 100 * WAN)
    {
        B += ((I - 100) * 0.01);
        I = 100;
    }
 
    if (I > 60)
    {
        B += ((I - 60) * 0.015);
        I = 60;
    }
    if (I > 40)
    {
        B += ((I - 40) * 0.03);
        I = 40;
    }
    
    if (I > 20)
    {
        B += ((I - 20) * 0.05);
        I = 20;
    }
 
    if (I > 10)
    {
        B += ((I - 10) * 0.075);
        I = 10;
    }
 
    B += (I * 0.1);
 
    printf("%lf", B);
}