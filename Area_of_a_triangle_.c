#include<stdio.h>
int tri(int b,int h,int area);
int main()
{
    int b,h,area;
    scanf("%d%d",&b,&h);
    int x=tri(b,h,area);
}
int tri(int b,int h,int area)
{
    area=0.5*b*h;
    printf("%d",area);
    return 0;
}