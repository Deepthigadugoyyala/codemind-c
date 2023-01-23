#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rev=0,temp=n;
    while(n)
    {
        int rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}