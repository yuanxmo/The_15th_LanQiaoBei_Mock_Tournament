#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    num = (num/100000) + (num%100000)*10;
    printf("%d",num);
    return 0;
}