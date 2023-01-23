#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,c=0,r,s=0;
    scanf("%d",&k);
    n=k;
    while(k!=0)
    {
        c++;
        k=k/10;
    }
    k=n;
    while(k!=0)
    {
        r=k%10;
        s=s+pow(r,c);
        k=k/10;
        c--;
    }
    if(s==n)
    printf("True");
    else
    printf("False");
}