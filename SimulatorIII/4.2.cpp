#include <iostream>
#include <queue>
using namespace std;
int fun1(char num)
{
    return num-'0';
}
int main()
{
    char numTemp[51] = {"12345678901234567890123456789012345678901234567890"};
    queue<int> num;
    for (int i = 0; i < 50; i++) {
        int temp = fun1(numTemp[i]);
        num.push( temp );
    }
    int num1 = 0;
    for (int i = 0; i < 3; i++) {
        num1 = num1 * 10 + num.front();
        num.pop();
    }
    bool empty = num.empty();
    while (!empty) {
        num1 *= 10;
        num1 += num.front();
        num.pop();
        empty = num.empty();
        num1 %= 2023;
    }
    cout << num1 << endl;
    system("pause");
    return 0;
}