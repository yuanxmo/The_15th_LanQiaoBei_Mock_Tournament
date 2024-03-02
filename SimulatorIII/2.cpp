#include <iostream>
using namespace std;
int main()
{
    int res = 0;
    for (int l = 0; l <= 100; l++) {
        for (int r = 0; r <= 100; r++) {
            if (r - l >= 10) {
                res++;
            }
        }
    }
    cout << res << endl;

    system("pause");
    return 0;
}