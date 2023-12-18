#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0; i<a; i++)
    {
        scanf("%d ",&arr[i]);
        if(i%2!=0)
        {
            b=b+arr[i];
        }
        
    }
    printf("%d",b);
}