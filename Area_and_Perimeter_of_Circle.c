#include<stdio.h>
int ar(int r);
int main()
{
    int r;
    scanf("%d",&r);
    int x=ar(r);
}
int ar(int r)
{
    float area,per;
    area=3.14*r*r;
    per=2*3.14*r;
    printf("%0.2f
",area);
    printf("%0.2f",per);
    return 0;
}