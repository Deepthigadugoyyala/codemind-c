#include<stdio.h>
int main()
{
    int i,n,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0,esum=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+a[i];
        }
        else
        {
            esum=esum+a[i];
        }
    }
    d=sum-esum;
    printf("%d",d);
}