#include<stdio.h>
int main()
{
    int s=0,n,d,sq;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        d=sq%10;
        s+=d;
        sq=sq/10;
    }
    if(s==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}