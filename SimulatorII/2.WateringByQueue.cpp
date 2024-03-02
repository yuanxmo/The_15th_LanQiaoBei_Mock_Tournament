#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{
   char nums[31][41];
   int i,r,c,sum=0;
   bool empty;
   for (i = 1; i <= 30; i++) {
       scanf("%s",nums[i]);
   }
   queue< vector<int> > Two;
   Two.push({1,0});
   empty = Two.empty();
   while (!empty) {
       vector<int> temp = Two.front();
       Two.pop();
       r = temp[0];
       c = temp[1];
       nums[r][c] = '2';
       if (r <= 0 || r > 30 || c < 0 || c >= 40)
           continue;
       sum++;
       if (nums[r][c + 1] == '0') {
           Two.push({r, c + 1});
           nums[r][c+1] = '2';
       }
       if (nums[r][c - 1] == '0') {
           Two.push({r, c - 1});
           nums[r][c-1] = '2';
       }
       if (nums[r + 1][c] == '0') {
           Two.push({r + 1, c});
           nums[r+1][c] = '2';
       }
       if (nums[ r-1 ][ c ] == '0') {
           Two.push({r - 1, c});
           nums[r-1][c] = '2';
       }
       empty = Two.empty();
   }
   cout << sum << endl;
    // cout << 541;
    return 0;
}