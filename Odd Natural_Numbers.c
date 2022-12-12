#include<stdio.h>
void nat(int i,int n,int odd);
int main()
{
    int i,n,odd;
    scanf("%d",&n);
    nat(i,n,odd);
}
void nat(int i,int n,int odd)
{
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
}
