#include <iostream>
using namespace std;
int main()
{
  // 请在此输入您的代码
  string str;
    cin >> str;
    int size = str.length();
    int i;
    for (i = size - 1; i >= 0; i--) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            printf("%c",str[i]);
            return 0;
        }
  }
  return 0;
}