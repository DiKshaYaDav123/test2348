#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%2)
        printf("an odd number");
    else
        printf("an even number");
    return 0;
}
