#include<stdio.h>
int main()
{
    int hrs,mins,n;
    scanf("%d",&n);
    hrs=n/60;
    mins=n%60;
    printf("%d Hour(s) %d Minute(s)",hrs,mins);
}