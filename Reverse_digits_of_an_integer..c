#include<stdio.h>
void reverse(int n,int r,int rev);
int main()
{
    int n,r,rev=0;
    scanf("%d",&n);
    reverse(n,r,rev);
}
void reverse(int n,int r,int rev)
{
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%d",rev);
}