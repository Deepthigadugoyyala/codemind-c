#include<stdio.h>
void diamond(int n,int i,int j);
int main()
{
	int n,i,j;
	scanf("%d",&n);
	diamond(n,i,j);
}
void diamond(int n,int i,int j)
{
	if(n<3)
	{
		printf("The pattern is not possible");
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("*");
			}
			printf("
");
		}
		for(int i=n-1;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
				printf("*");
			}
			printf("
");
		}
	}
}