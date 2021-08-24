#include<stdio.h>

int main()
{
    int array[15];
    int largest=0,j;
    printf("Enter 15 whole numbers \n");
    for(j=0;j<15;j++)
    {
        scanf("%d",&array[j]);
    }
    for(j=0;j<15;j++)
    {
        if(largest<=array[j])
        {
            largest=array[j];
        }
    }
    printf("The Greatest Number is : %d",largest);
}
