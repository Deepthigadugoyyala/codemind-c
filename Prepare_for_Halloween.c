#include<stdio.h>
int hal(int t);
int main()
{
    int t;
    scanf("%d
",&t);
    int X=hal(t);
}
int hal(int t)
{
    int x,y;
    while(t)
    {
        scanf("%d %d",&x,&y);
        if(x*2>y*5)
        {
            printf("Chocolate
");
        }
        else if(x*2==y*5)
        {
            printf("Either
");
        }
        else if(x*2<y*5)
        {
            printf("Candy
");
        }
        t--;
    }
    return 0;
}