#include<stdio.h>
int main()
{
      int  a,b;
      printf("Enter two numbers:");
      scanf("%d%d",&a,&b);
      if(a>b)
           printf("%d is greater",a);
      else if(a<b)
           printf("%d is greater",b);
      else
            printf("%d and %d are equal",a,b);
      return 0;
}
