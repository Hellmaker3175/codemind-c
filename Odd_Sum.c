#include<stdio.h>
int main()
{
    int a,c=0;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            continue;
        }
        else
        {
            c=c+arr[i];
        }
    }
    printf("%d",c);
}