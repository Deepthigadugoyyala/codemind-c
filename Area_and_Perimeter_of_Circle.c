#include<stdio.h>
void ar(int r);
int main()
{
    int r;
    scanf("%d",&r);
    ar(r);
}
void ar(int r)
{
    float area,per;
    area=3.14*r*r;
    per=2*3.14*r;
    printf("%0.2f
",area);
    printf("%0.2f",per);
}