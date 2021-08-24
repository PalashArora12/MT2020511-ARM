#include<stdio.h>

int main()
{
    int arr[20];
    int t=0;
	int i;
	printf("Enter 20 whole Numbers"); 
    for(i=0;i<20;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<20;i++)
    {
        if(arr[i]%2==0)
        t=t+1;
    }
    printf("no of even no. is : %d",t);
}
