#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    
    if (a-b==0 || b-a==0)
    {
        printf("No Profit and No Loss");
    }
    else if(a>b)
    {
        printf("Loss");
    }
    else if(b>a)
    {
        printf("Profit");
    }
}