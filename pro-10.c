#include<stdio.h>
int main()
{
    int  cp,sp;
    printf("Enter cost price and selling price:\n");
    scanf("%d%d",&cp,&sp);
    if(cp<sp)
        printf("Profit=%d\n",sp-cp);
    else if(cp>sp)
        printf("Loss=%d\n",cp-sp);
    else
        printf("No Profit and No Loss\n");
    return 0;

}
