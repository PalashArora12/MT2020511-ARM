#include<stdio.h>

int main()
{
    int a[20];
    int temp,i,j;
    printf("Enter 20 Numbers : ");
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<20;i++)
    {
        for(j=i+1;j<20;j++)
        {
            if(a[i]>=a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
printf("Sorted Array is : \n ");
    for(i=0;i<20;i++)
    {
        printf("%d \n",a[i]);
    }

}
