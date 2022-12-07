#include<stdio.h>
void c(int units,int uc);
int main()
{
    int units,uc=0;
    scanf("%d",&units);
    c(units,uc);
}
void c(int units,int uc)
{
    float bill,sr,tb;
    if (units<200)
    {
        bill=units*1.20;
    }
    else if (units>=200 && units<400)
    {
        bill=units*1.50;
    }
    else if (units>=400 && units<600)
    {
        bill=units*1.80;
    }
    else
    {
        bill=units*2.00;
    }
    if (bill>=400)
    {
        sr=bill*0.15;
        tb=bill+sr;
        printf("%0.2f",tb);
    }
    else
    {
        tb=bill+100;
        printf("%0.2f",tb);
    }
}
