#include<stdio.h>
int ar(int n,int even);
int main()
{
    int n,even=0;
    scanf("%d",&n);
    int a=ar(n,even);
}
int ar(int n,int even)
{
    int x[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]%2==0)
        even=even+x[i];
    }
    printf("%d",even);
    return 0;
}