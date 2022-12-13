#include<stdio.h>
int arr(int n,int i,int min);
int main()
{
    int n,i,min;
    scanf("%d",&n);
    int x=arr(n,i,min);
}
int arr(int n,int i,int min)
{
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    min=x[0];
    for(i=0;i<n;i++)
    {
        if(x[i]<min)
        min=x[i];
    }
    printf("%d",min);
    return 0;
}