// AC
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> A_(n), B_(n);
  for (int i = 0; i < n; i++) cin >> A_.at(i) >> B_.at(i);

  int sum = 0;
  for (int i = 0; i < n; i++) {
    int start = A_.at(i), end = B_.at(i);
    for (int j = i + 1; j < n; j++) {
      if (start - 1 <= B_.at(j) && A_.at(j) < start) start = A_.at(j);
      if (A_.at(j) <= end + 1 && end < B_.at(j)) end = B_.at(j);
    }
    if (sum < end - start + 1) sum = end - start + 1;
  }

  cout << sum << endl;
}
