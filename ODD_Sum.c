#include<stdio.h>
int main()
{
    int n,odd=0;
    scanf("%d",&n);
    int x[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]%2!=0)
        odd=odd+x[i];
    }
    printf("%d",odd);
    return 0;
}