#include<stdio.h>
float mul(float a,float b);
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    float x=mul(a,b);
}
float mul(float a,float b)
{
    printf("%0.2f",a*b);
    return 0;
}