#include<stdio.h>
int N(int i,int n);
int main()
{
    int i,n;
    scanf("%d",&n);
    int x=N(i,n);
}
int N(int i,int n)
{
    for(i=1;i<=n;i++)
    {
            printf("%d ",i*3);
    }
    return 0;
}
