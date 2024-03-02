#include <stdio.h>
long long MaximumSumOfIntervals()
{
    int n,k;
    int i,j;
    long long res;
    long long num;
    scanf("%d %d",&n,&k);
    int nums[n];
    for (i = 0; i < n; i++)
        scanf("%d",nums+i);
    for (i = 0; i < k; i++){
        res += nums[i];
    }
    j = 0;
    num = res;
    for (i = k; i < n; i++) {
        num = num-nums[j]+nums[i];
        res = res>num?res:num;
        j++;
    }
    return res;
}
int main()
{
    long long res = MaximumSumOfIntervals();
    printf("%lld",res);
    return 0;
}