#include<stdio.h>
int coll(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int x=coll(n);
}
int coll(int n)
{
    int i,k,l;
    while(n!=1)
    {
        if(n%2==0)
        {
            printf("%d ",n);
            n/=2;
        }
        else
        {
            printf("%d ",n);
            n=(n*3)+1;
        }
    }
    printf("1");
    return 0;
}