#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n, x, y;
  cin >> n >> x >> y;
  int cost = min(3, n) * x;
  n -= min(n, 3);
  cost += n * y;
  cout << cost << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
