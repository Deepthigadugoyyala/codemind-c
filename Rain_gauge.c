#include<stdio.h>
void RG(int t,int x);
int main()
{
    int t,x;
    scanf("%d",&t);
    RG(t,x);
}
void RG(int t,int x)
{
    while(t)
    {
        scanf("%d",&x);
        if(x<3)
        {
            printf("LIGHT
");
        }
        else if(x>=3 && x<7)
        {
            printf("MODERATE
");
        }
        else if(x>=7)
        {
            printf("HEAVY
");
        }
        t--;
    }
}