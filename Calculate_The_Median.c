#include<stdio.h>
int med(int n,int i,int j);
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int x=med(n,i,j);
}
int med(int n,int i,int j)
{
	int x[n];
	int k;
	for(k=0;k<n;k++)
	{
		scanf("%d",&x[k]);
	}
	int t;
	for( i=0;i<n;i++)
	{
		for( j=i+1;j<n;j++)
		{
			if(x[i]>x[j])
			{
			    t=x[i];
			    x[i]=x[j];
			    x[j]=t;
			}
		}
	}
	printf("%d",x[n/2]);
	return 0;
}