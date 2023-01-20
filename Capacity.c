#include<stdio.h>
int main()
{
    int s,t,b,a,c;
    scanf("%d%d%d",&s,&t,&b);
    a=2*s*t*b*512/1024;
    //kb=(a/1024);
    printf("%d KB ",a);
}