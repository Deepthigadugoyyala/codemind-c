#include<stdio.h>
int main()
{
    int s=0,n,r,m=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        m=m*r;
        n=n/10;
    }
    if(s==m)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}