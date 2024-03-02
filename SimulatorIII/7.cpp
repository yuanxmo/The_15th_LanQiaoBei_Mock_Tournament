#include <iostream>
#include <cstring>
#include <string>
using namespace std;
char nums[10001] = {0};
int fun1(char ch)
{
    return ch - '0';
}
int main()
{
    int res = 0;
    scanf("%s",nums);
    int length = strlen(nums);
    for (int i = 0; i < length; i++) {
        int temp = fun1(nums[ i ]);
        if (temp % 2) {
            res++;
        }
    }
    cout << res << endl;
    system("pause");
    return 0;
}