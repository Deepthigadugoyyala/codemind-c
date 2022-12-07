#include<stdio.h>
int N(int i,int n,int sum);
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    int x=N(i,n,sum);
}
int N(int i,int n,int sum)
{
    for(i=0;i<=n;i++)
    {
        sum+=i;
    }
        printf("%d",sum);
        return 0;
}
