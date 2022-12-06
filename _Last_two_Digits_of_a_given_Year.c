#include<stdio.h>
int main()
{
    int year,first,second;
    scanf("%d",&year);
    second=year%10;
    first=year%100/10;
    printf("%d%d",first,second);
    return 0;
}