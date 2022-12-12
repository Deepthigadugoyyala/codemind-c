#include<stdio.h>
int nat(int i,int n);
int main()
{
    int i,n;
    scanf("%d",&n);
    int x=nat(i,n);
}
int nat(int i,int n)
{
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    return 0;
}