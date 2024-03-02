#include <stdio.h>
int Sum(int num)
{
    int n = 0;
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            n++;
    return n;
}
int main()
{
    int Max = -1;
    int nums[6][6];
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            scanf("%d",&nums[i][j]);
    int nums1[6][6] = {0};
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            nums1[i][j] = Sum(nums[i][j]);
            Max = Max>nums1[i][j]?Max:nums1[i][j];
        }
    }
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            if (Max == nums1[i][j]) {
                printf("%d",nums[i][j]);
                return 0;
            }
    // printf("%d",901440);
    return 0;
}