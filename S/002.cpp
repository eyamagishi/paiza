// WA
#include <bits/stdc++.h>
using namespace std;

int w, h, cnt = 100100;
bool is_goal = false;

void dfs(vector<vector<char>> &table, vector<vector<bool>> &checked, int y, int x, int num) {
  if (y < 0 || x < 0 || h <= y || w <= x ||
    checked.at(y).at(x) == true || table.at(y).at(x) == '1') return;
  if (table.at(y).at(x) == 'g') {
    if (num < cnt) cnt = num;
    is_goal = true;
    return;
  }

  // 幅優先探索
  checked.at(y).at(x) = true;
  dfs(table, checked, y - 1, x, num + 1);
  dfs(table, checked, y + 1, x, num + 1);
  dfs(table, checked, y, x - 1, num + 1);
  dfs(table, checked, y, x + 1, num + 1);
  return;
}

int main() {
  cin >> w >> h;
  vector<vector<char>> table(h, vector<char>(w));
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      cin >> table.at(y).at(x);
    }
  }

  vector<vector<bool>> checked(h,vector<bool>(w, false));
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      if (table.at(y).at(x) == 's') {
        dfs(table, checked, y, x, 0);
        if (is_goal) {
          cout << cnt << endl;
          return 0;
        }
      }
    }
  }

  cout << "Fail" << endl;
  return 0;
}
