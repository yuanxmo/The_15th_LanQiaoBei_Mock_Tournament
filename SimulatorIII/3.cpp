#include <iostream>
using namespace std;
int nums[1000001] = {0};
//判断题意
bool fun2(int num)
{
    int res = 0;
    while (num != 0) {
        res += (num % 10);
        num /= 10;
    }
    if (res == 23) {
        return true;
    }
    return false;
}
//筛法搜索质数
int fun1()
{
    int res = 0;
    for (int i = 2; i <= 1000000; i++) {
        if (nums[ i ]) {
            continue;
        }
        if ( fun2(i) ) {
            res++;
        }
        int temp = 2 * i;
        while (temp <= 1000000) {
            nums[ temp ] = 1;
            temp += i;
        }
    }
    return res;
}
int main()
{
    int res = fun1();
    cout << res << endl;


    system("pause");
    return 0;
}