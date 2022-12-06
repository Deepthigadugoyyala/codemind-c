#include<stdio.h>
void secs(int sec,int h,int m,int s);
int main()
{
    int sec,h,m,s;
    scanf("%d",&sec);
    secs(sec,h,m,s);
}
void secs(int sec,int h,int m,int s)
{
    h=(sec/3600);
    m=(sec-(3600*h))/60;
    s=(sec-(3600*h)-(m*60));
    printf("H:M:S-%d:%d:%d",h,m,s);
}