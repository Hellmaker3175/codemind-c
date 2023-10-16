#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=(a/365);
    c=(b*365);
    e=(a-c);
    d=(e/7);
    printf("%d
%d",b,d);
    
}