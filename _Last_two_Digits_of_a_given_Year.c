#include<stdio.h>
int yr(int year,int first,int second);
int main()
{
    int year,first,second;
    scanf("%d",&year);
    int x=yr(year,first,second);
}
int yr(int year,int first,int second)
{
    second=year%10;
    first=year%100/10;
    printf("%d%d",first,second);
    return 0;
}