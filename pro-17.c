#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter length of three sides of a triangle:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&c+a>b)
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}
