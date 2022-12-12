#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=n*2;i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}
