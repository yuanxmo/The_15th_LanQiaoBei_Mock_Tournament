#include <iostream>
using namespace std;
char matrix[1001][1001] = {0};
int n,m;
int fun(int i,int j,char ch)
{
    int res = 0;
    if (i <= 1 || j <= 1 || i >= n || j >= m) {
        return 0;
    }
    for (int p = 1; ;p++) {
        if (matrix[i-p][j-p] == ch &&
            matrix[i-p][j+p] == ch &&
            matrix[i+p][ j ] == ch) {
                res++;
        } else {
            break;
        }
        if (i-p <= 1 || i+p >= n || j-p <= 1 || j+p >= m) {
            break;
        }
    }
    return res;
}
int main()
{
    int res = 0;
    cin >> n;
    cin >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            int temp = fun(i,j,matrix[i][j]);
            res = res>temp?res:temp;
        }
    }
    cout << res << endl;
    system("pause");
    return 0;
}