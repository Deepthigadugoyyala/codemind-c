#include<stdio.h>
void tri(int b,int h,int area);
int main()
{
    int b,h,area;
    scanf("%d%d",&b,&h);
    tri(b,h,area);
}
void tri(int b,int h,int area)
{
    area=0.5*b*h;
    printf("%d",area);
}