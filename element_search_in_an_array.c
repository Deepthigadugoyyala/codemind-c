#include<stdio.h>
int main()
{
    int n,k=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int num;
    scanf("%d",&num);
    for(int j=0;j<n;j++)
    {
        if(num==x[j])
        {
            printf("True");
            k++;
            break;
        }
    }
    if(k==0)
    {
        printf("False");
    }
}