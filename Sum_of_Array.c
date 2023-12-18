#include<stdio.h>
int main()
{
    int a,c=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        c=c+arr[i];
    }
    printf("%d",c);
}