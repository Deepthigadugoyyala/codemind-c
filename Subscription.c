#include<stdio.h>
int sub(int t);
int main()
{
    int t;
    scanf("%d",&t);
    int X=sub(t);
}
int sub(int t)
{
    int n,x;
    while(t)
    {
        scanf("%d",&x);
        if(x>30)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
        t--;
    }
    return 0;
}