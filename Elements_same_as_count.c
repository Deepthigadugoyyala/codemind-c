#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        
    }
    int c=0,co=0;
    for(int i=0;i<n;i++)
    {
        c=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j&&x[i]==x[j])
            {
                c++;
                x[j]=0;
            }
        }
        if(c==x[i])
        {
            printf("%d ",x[i]);
            co++;
        }
    
    }
    if(co==0)
    {
        printf("-1");
    }
}