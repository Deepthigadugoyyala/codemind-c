#include<stdio.h>
int palin(int n,int r,int rev,int s);
int main()
{
    int n,r,rev=0,s;
    scanf("%d",&n);
    int x=palin(n,r,rev,s);
}
int palin(int n,int r,int rev,int s)
{
     s=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(s==rev)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    return 0;
}