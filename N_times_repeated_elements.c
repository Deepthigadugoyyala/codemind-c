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
    int k,count=0;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        int c=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(x[i]==x[j]&x[i]!=0)
                {
                    c++;
                    x[j]=0;
    
                }
            }
            
        }
        if(c==k)
            {
                printf("%d ",x[i]);
                count++;
            }
        
    }
    if(count==0)
        {
            printf("-1");
        }
}