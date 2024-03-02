#include <iostream>
using namespace std;
int main()
{
    int res = 0;
    for (int i = 1; i <= 2023; i++) {
        if (2023 % i == 0) {
            res++;
        }
    }
    cout << res << endl;
    system("pause");
    return 0;
}