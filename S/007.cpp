// AC
#include <bits/stdc++.h>
using namespace std;

int stack_func(string s, vector<long long> &alpha, int size, int cnt, long long time) {
  // リダイレクト
  if (size <= cnt) return size;

  for (int i = cnt; i < size; i++) {
    if ('a' <= s[i] && s[i] <= 'z') {
      // アルファベットのとき
      alpha[s[i] - 'a'] += time;
    } else if ('0' <= s[i] && s[i] <= '9') {
      // 数字のとき
      long long tmp_time = s[i] - '0';
      i++;
      while ('0' <= s[i] && s[i] <= '9') {
        tmp_time = 10 * tmp_time + s[i] - '0';
        i++;
      }
      if (s[i] == '(') {
        i = stack_func(s, alpha, size, i + 1, time * tmp_time);
      } else {
        alpha[s[i] - 'a'] += time * tmp_time;
      }
    } else if (s[i] == ')') {
      return i;
    }
  }
  return size;
}

int main() {
  string s;
  cin >> s;

  int size = (int)s.size();
  vector<long long> alpha(26, 0);
  stack_func(s, alpha, size, 0, 1);

  for (int i = 0; i < 26; i++) cout << char('a' + i) << ' ' << alpha.at(i) << endl;
}
