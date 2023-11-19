// WA
#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char>> ch(h, vector<char>(w));
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) cin >> ch.at(y).at(x);
  }

  int sum = 0;
  for (int y = 1; y < h - 1; y++) {
    for (int x = 1; x < w - 1; x++) {
      if(ch.at(y).at(x) == '.' &&
        ch.at(y - 1).at(x) == '#' &&
        ch.at(y).at(x - 1) == '#' &&
        ch.at(y + 1).at(x) == '#' &&
        ch.at(y).at(x + 1) == '#') sum++;
    }
  }

  cout << sum << endl;
}
