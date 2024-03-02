#include <iostream>
using namespace std;
char nums[30][40];
int sum = 0;
void dfs(int i,int j)
{
    if (i < 0 || i >= 30 || j < 0 || j >= 40)
        return;
    if (nums[i][j] != '0')
        return;
    sum++;
    nums[i][j] = '2';
    dfs(i,j+1);
    dfs(i,j-1);
    dfs(i+1,j);
    dfs(i-1,j);
}
int main()
{
    for (int i = 0; i < 30; i++)
        scanf("%s",nums[i]);
    dfs(0,0);
    cout << sum ;
    // cout << 541;
    return 0;
}