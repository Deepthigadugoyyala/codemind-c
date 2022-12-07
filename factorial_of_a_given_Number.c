#include<stdio.h>
void f(int fact,int n,int i);
int main()
{
    int fact=1,n,i;
    scanf("%d",&n);
    f(fact,n,i);
}
void f(int fact,int n,int i)
{
    for(i=1;i<=n;i++)
    fact=fact*i;
    {
        printf("%d ",fact);
    }
}
