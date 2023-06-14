#include<stdio.h>
int main()
{
    int n,temp,sq,fc=1;
    scanf("%d",&n);
    temp=n;
    sq=n*n;
    while(n>0)
    {
        n=n/10;
        fc=fc*10;
    }
    if(temp==sq%fc)printf("Automorphic Number");
    else printf("Not an Automorphic Number");
}