#include<stdio.h>
int sv(float x);
int main()
{
        float x;
        scanf("%f",&x);
        int A=sv(x);
}
int sv(float x)
{
        float a,v;
        a=6*x*x;
        v=x*x*x;
        printf("Surface area = %0.2f and Volume = %0.2f",a,v);
        return 0;
}