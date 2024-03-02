#include <iostream>
using namespace std;
int main()
{
    int n,res,temp;
    cin >> n;
    temp = n % 3;
    if (!temp) {
        res = n / 3;
    } else {
        res = n / 3 + 1;
    }
    cout << res << endl;
    system("pause");
    return 0;
}