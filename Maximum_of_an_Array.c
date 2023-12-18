#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    int arr[a];
    
    for(int i=0; i<a; i++)
    {
        scanf("%d ",&arr[i]);
    }
    b=arr[0];
    int temp;
    for(int i = 1; i<a; i++)
    {
    	temp = arr[i];
        if(temp > b)
        {
            b = temp;
        }
   
        
    }
    printf("%d",b);
}