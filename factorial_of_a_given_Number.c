#include<stdio.h>
int f(int fact,int n,int i);
int main()
{
    int fact=1,n,i;
    scanf("%d",&n);
    int x=f(fact,n,i);
}
int f(int fact,int n,int i)
{
    for(i=1;i<=n;i++)
    fact=fact*i;
    {
        printf("%d ",fact);
    }
    return 0;
}
