#include<stdio.h>
int nat(int i,int n,int odd);
int main()
{
    int i,n,odd;
    scanf("%d",&n);
    int x=nat(i,n,odd);
}
int nat(int i,int n,int odd)
{
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
