#include<stdio.h>
int trape(int b1,int b2,int h);
int main()
{
    int b1,b2,h;
    scanf("%d%d%d",&b1,&b2,&h);
    int x=trape(b1,b2,h);
}
int trape(int b1,int b2,int h)
{
    float ar;
    ar=((b1+b2)/2.0)*h;
    printf("%0.4f",ar);
    return 0;
}