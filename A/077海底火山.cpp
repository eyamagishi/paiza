// 未提出
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, r;
  cin >> n >> r;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x.at(i) >> y.at(i);
  }

  vector<vector<int>> checked(n, vector<int>(0));
  int cnt = n;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int dist = sqrt((x.at(i) - x.at(j)) * 2 + (y.at(i) - y.at(j)) * 2);
      if (dist <= 2 * r) {
        checked.at(i).push_back(j);
        checked.at(j).push_back(i);
        cnt--;
      }
    }
  }

  cout << cnt << endl;
}
