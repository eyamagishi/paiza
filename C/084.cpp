// AC
#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;

  for (int i = 0; i < 3; i++) {
    cout << '+';
    for (int j = 0; j < (int)str.size(); j++) {
      if(i == 1) cout << str[j];
      else cout << '+';
    }
    cout << '+' << endl;
  }
}
