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
    int count;
    double s=0,avg;
    for(int i=0;i<n;i++)
    {
        int c=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(x[i]!=0&&x[i]==x[j])
                {
                    c++;
                    x[j]=0;
                }
            }
           
        }
         if(c==x[i])
            {
                s=s+x[i];
                count++;
            }
    }
    if(count==0)
    {
        printf("-1");
    }
    else
    {
        avg=s/count*1.0;
        printf("%.2f",avg);
    }
}