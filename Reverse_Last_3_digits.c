#include<stdio.h>
int rev(int);
int main()
{
    int n,a,b,f,z;
    scanf("%d",&n);
    a=n/1000;
    b=n%1000;
    f=rev(b);
    z=a*1000+f;
    printf("%d",z);
}
int rev(int n)
{
    int r,x=0;
    while(n!=0)
    {
        r=n%10;
        x=x*10+r;
        n=n/10;
    }
    return x;
}