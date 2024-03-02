#include <stdio.h>
int num[1001][1001];
int nums[1001][1001] = {0};
int n,m,res = 0;
//求最大公约数
int fun(int x, int y)
{
    int z = y;
    while(x % y != 0)
    {
        z = x % y;
        x = y;
        y = z;
    }
    return z;
}
//DFS搜索
void dfs(int i,int j)
{
    if (i <= 0 || i > n || j <= 0 || j > m)
        return;
    if (!num[i][j]) {
        num[i][j] = 1;
        res++;
        if (j < m && fun(nums[i][j],nums[i][j+1]) > 1)
            dfs(i,j+1);
        if (j > 1 && fun(nums[i][j],nums[i][j-1]) > 1)
            dfs(i,j-1);
        if (i < n && fun(nums[i][j],nums[i+1][j]) > 1)
            dfs(i+1,j);
        if (i > 1 && fun(nums[i][j],nums[i-1][j]) > 1)
            dfs(i-1,j);
    }
}
int main()
{
    scanf("%d %d",&n,&m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d",&nums[i][j]);
    int r,c;
    scanf("%d %d",&r,&c);
    dfs(r,c);
    printf("%d",res);
    return 0;
}