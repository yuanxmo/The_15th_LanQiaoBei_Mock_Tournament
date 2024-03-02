#include <iostream>
#include <cstring>
using namespace std;
int n,a,b,c;
int fun(int num,int *nums)
{
    int res = 0;
    bool i = false;
    if (num-a > 0 && nums[ num-a ]) {
        res += nums[ num-a ];
        i = true;
    }
    if (num-b > 0 && nums[ num-b ]) {
        res += nums[ num-b ];
        i = true;
    }
    if (num - c > 0 && nums[ num-c ]) {
        res += nums[ num-c ];
        i = true;
    }
    if (!i) {
        return 0;
    }
    if(num == a || num == b || num == c) {
        res++;
    }
    return res;
}
int main()
{
    cin >> n;
    cin >> a;
    cin >> b;
    cin >> c;
    int nums[ n+1 ];
    memset(nums,0,sizeof(nums));
    nums[ a ] = 1;
    for (int i = a + 1; i <= n; i++) {
        nums[ i ] = fun(i,nums) % 1000000007;
    }
    cout << nums[n] << endl;
    system("pause");
    return 0;
}