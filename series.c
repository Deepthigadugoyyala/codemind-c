#include<stdio.h>
#include<math.h>
void series(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("0 ");
    series(n);
}
void series(int n)
{
    int a,b,i,k1=0,k2=0;
    for(i=0;i<=n-2;i++)
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
}