#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character:");
    scanf("%c",&x);
    if(x>='a'&&x<='z')
        printf("uppercase alphabet");
    else if(x>='0'&&x<='9')
        printf("Digit");
    else
        printf("Special character");
    return 0;
}
