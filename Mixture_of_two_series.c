#include<stdio.h>
#include<math.h>
int series(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int x=series(n);
}
int series(int n)
{
    int a,b,i,k1=0,k2=0;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            a=pow(3,k1);
            printf("%d ",a);
            k1++;
        }
        else
        {
            b=pow(2,k2);
            printf("%d ",b);
            k2++;
        }
    }
    return 0;
}