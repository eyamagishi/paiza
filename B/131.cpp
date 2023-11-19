// AC
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, X;
  cin >> n >> m;
  vector<vector<int>> A_(n, vector<int>(m));
  for (int y = 0; y < n; y++) {
    for (int x = 0; x < m; x++) {
      cin >> A_.at(y).at(x);
    }
  }
  cin >> X;

  int now_x = 0, sum = 0;
  for (int i = 0; i < X; i++) {
    int R_, S_;
    cin >> R_ >> S_;
    R_--; S_--;
    sum += abs(A_.at(R_).at(S_) - A_.at(R_).at(now_x));
    now_x = S_;
  }

  cout << sum << endl;
}
