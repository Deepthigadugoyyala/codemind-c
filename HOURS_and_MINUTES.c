#include<stdio.h>
int hm(int hrs,int mins,int n);
int main()
{
    int hrs,mins,n;
    scanf("%d",&n);
    int x=hm(hrs,mins,n);
}
int hm(int hrs,int mins,int n)
{
    hrs=n/60;
    mins=n%60;
    printf("%d Hour(s) %d Minute(s)",hrs,mins);
    return 0;
}