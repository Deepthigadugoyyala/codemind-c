#include<stdio.h>
#include<math.h>
int EO(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int x=EO(n);
}
int EO(int n)
{
    int a,b,k1=0,k2=1;
    for(int i=1;i<=n+1;i++)
    {
        if(i%2==0)
        {
            a=pow(3,k1-1);
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