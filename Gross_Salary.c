#include<stdio.h>
int gross(int b,int DA,int HRA);
int main()
{
    int b,DA,HRA;
    scanf("%d",&b);
    int x=gross(b,DA,HRA);
}
int gross(int b,int DA,int HRA)
{
    float gr;
     if(b<=10000)
    {
        gr=b+(0.8*b)+(0.2*b);
    }
    else if(b>10000 && b<20000)
    {
        gr=b+(0.9*b)+(0.25*b);
    }
    else if(b>20000)
    {
        gr=b+(0.95*b)+(0.30*b);
    }
    printf("%0.2f",gr);
    return 0;
}