#include <stdio.h>
int main()
{
  long long num;
    scanf("%lld",&num);
    long long temp;
    while (num >= 10) {
        temp = 1;
        while (num != 0) {
            long long temp1 = num % 10;
            if (temp1)
                temp *= temp1;
            num /= 10;
        }
        num = temp;
        printf("%lld\n",num);
    }
  return 0;
}