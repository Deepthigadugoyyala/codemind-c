#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,es=0,os=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
   for(i=0;i<n;i++)
   {
       if(x[i]%2==0)
       es=es+x[i];
       else
       os=os+x[i];
   }
       printf("%d",abs(os-es));
}