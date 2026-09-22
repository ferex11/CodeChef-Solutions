#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  vector<int> prev(n + 1, 0), cur(n + 1, 0);
  for (int i = 0; i <= n; i++) {
    prev[i] = p[0] * i;
  }
  for (int i = 1; i < n; i++) {
    for (int len = 1; len <= n; len++) {
      int not_take = prev[len];
      int take = INT_MIN;
      int rod_len = i + 1;
      if (rod_len <= len) {
        take = p[i] + cur[len - rod_len];
      }
      cur[len] = max(not_take, take);
    }
    prev = cur;
  }
  cout << prev[n] << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
