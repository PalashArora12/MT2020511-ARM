#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a >= b && a >= c)
    printf("Largest number is : %d ",a);

    if(b >= a && b >= c)
    printf("Largest number:  %d", b);
    
    if(c >= a && c >= b)
    printf("Largest number: %d ",c);
    
    return 0;
}
