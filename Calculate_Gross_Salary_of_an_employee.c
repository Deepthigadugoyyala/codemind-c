#include<stdio.h>
int main()
{
    float basic,hra,da,pf,grosssalary;
    scanf("%f%f%f",&basic,&hra,&da);
    pf=basic*12/100;
    grosssalary=basic+hra+da+pf;
    printf("%0.2f
%0.2f",pf,grosssalary);
}