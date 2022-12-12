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
    for(i=n*2;i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
