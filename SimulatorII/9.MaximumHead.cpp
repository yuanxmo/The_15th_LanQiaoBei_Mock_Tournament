#include <stdio.h>
int main()
{
    int n,i,res=0;
    scanf("%d",&n);
    int nums[n];
    for (i = 0; i < n; i++)
        scanf("%d",&nums[i]);
    for (int i = 0; i < n - 1; i++) {
        if (nums[i]<nums[i+1])
            continue;
        int temp = nums[i]-nums[i+1];
        res = res>temp?res:temp;
    }
    printf("%d",res);
    return 0;
}