#include <stdio.h>
int two(int num) {
    int temp = 0;
    while (num != 0) {
        temp += num % 2;
        num /= 2;
    }
    return temp;
}
int eight(int num)
{
    int temp = 0;
    while (num != 0) {
        temp += num % 8;
        num /= 8;
    }
    return temp;
}
int main()
{
    int num = 0;
    int i = 0;
    while (num < 23) {
        i++;
        int temp2 = two(i);
        int temp8 = eight(i);
        if (temp2 == temp8)
            num++;
    }
    printf("%d",i);
    return 0;
}