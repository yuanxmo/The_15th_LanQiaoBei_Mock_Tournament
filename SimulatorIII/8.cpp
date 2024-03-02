#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> minNums;
    vector<int> maxNums;
    int n;
    cin >> n;
    int nums[ n ];
    for(int i = 0; i < n; i++) {
        cin >> nums[ i ];
    }
    for (int i = 1; i < n - 1; i++) {
        if (nums[i-1] < nums[i] &&
            nums[i] > nums[i+1]) {
                maxNums.push_back(nums[i]);
        } else if (nums[i-1] > nums[i] &&
                   nums[i] < nums[i+1]) {
                minNums.push_back(nums[i]);
        }
    }
    sort(minNums.begin(),minNums.end());
    sort(maxNums.begin(),maxNums.end());
    int size = minNums.size();
    cout << minNums[ size-1 ] << " " << maxNums[0] << endl;
    system("pause");
    return 0;
}