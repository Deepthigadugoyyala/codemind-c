#include<stdio.h>
void series(int n);
int main()
{
    int n;
    scanf("%d",&n);
    series(n);
}
void series(int n)
{
    int a=0,b=0;
    for(int i=1;i<=n+1;i++)
    {
        if(i%2==0)
        {
            a=(a*3)+2;
            printf("%d ",a);
        }
        else
        {
            b=(b*2)+1;
            printf("%d ",b);
        }
    }
}