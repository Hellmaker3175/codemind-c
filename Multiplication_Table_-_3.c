#include<stdio.h>
int main()
{
    int i,a,b,c, n;
    scanf("%d %d %d", &n,&b,&c);
    for (i=b; i<=c; i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}