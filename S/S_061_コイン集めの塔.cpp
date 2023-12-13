// 未着手
#include <bits/stdc++.h>
using namespace std;

int h, w, n;

int bfs(int z, int y, int x, ) {
  return 0;
}

int main() {
  cin >> h >> w >> n;
  vector<vector<vector<int>>> s_(n, vector<vector<int>>(h, vector<int>(w)));
  for (int z = 0; z < n; z++) {
    for (int y = 0; y < h; y++) {
      for (int x = 0; x < w; x++) cin >> s_.at(z).at(y).at(z);
    }
  }

  int coins = 0;
  for (int z = 0; z < n; z++) {
    for (int y = 0; y < h; y++) {
      for (int x = 0; x < w; x++) {
        if (s_.at(z).at(y).at(x) != 'S') continue;
        coins = bfs(z, y, x, 0);
      }
    }
  }

}
