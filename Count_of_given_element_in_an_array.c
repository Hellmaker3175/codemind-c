#include<stdio.h>
int main()
{
    int a,b,c,count=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0; i<a; i++)
    {
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&c);
    
    for(int i = 0; i < a; i++){
        if(c==arr[i]){
            count++;
        }
    }
    printf("%d",count);
    
    
    
}