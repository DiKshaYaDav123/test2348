#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%5)
        printf("divisible by 5");
    else
        printf("not divisible 5");
    return 0;
}


