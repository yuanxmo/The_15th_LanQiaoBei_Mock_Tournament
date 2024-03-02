#include <iostream>
#include <cmath>
using namespace std;
int Num(int num)
{
    if (num < 10)
        return pow(2,num);
    else if (num == 10)
        return 24;
    return (Num(num/2)*Num(num-num/2))%1000;
}
int main()
{
    int res = Num(2023);
    cout << res;
    return 0;
}