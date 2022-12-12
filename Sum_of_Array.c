#include<stdio.h>
void ar(int n,int sum);
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    ar(n,sum);
}
void ar(int n,int sum)
{
    int x[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    printf("%d",sum);
}