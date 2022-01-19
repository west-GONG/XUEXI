int is_leap__year(int year)
{
    return(year%4==0&&year%100!=0)||year%400==0;
}
int get_days(int year,int month)
{
    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
        default:if(is_leap__year(year))
        return 29;
        else
            return 28;

    }
}
void print_week(int weekday)
{
    switch(weekday)
    {
case 0:
        printf("星期天\n");
        break;
case 1:
        printf("星期一\n");
        break;
case 2:
        printf("星期二\n");
        break;
case 3:
        printf("星期三\n");
        break;
case 4:
        printf("星期四\n");
        break;
case 5:
        printf("星期五\n");
        break;
case 6:
        printf("星期六\n");
        break;
    }
}
int main()
{
    int year,month,day,i;
    printf("请输入年月日，并用空格隔开：");
    scanf("%d %d %d",&year,&month,&day);
    int sum=0;
    for (i=0;i<year;i++)
    {
        if(is_leap__year(i))
        {
            sum=sum+366;
        }
        else
        {
            sum=sum+365;
        }
    }
    for(i=0;i<month;i++)
    {
        sum=sum+get_days(year,i);
    }
    sum+=day+1;
    printf("%d 年 %d 月 %d 日是:",year,month,day);
    print_week(sum%7);
    return 0;
}