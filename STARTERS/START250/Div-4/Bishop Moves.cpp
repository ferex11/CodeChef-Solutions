#include<bits/stdc++.h>
using namespace std;

void solve() {
  int x1, x2, y1, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  if (x1 == x2 && y1 == y2) {
    cout << "0\n";
  } else if ((x1 + y1) % 2 != (x2 + y2) % 2) {
    cout << "-1\n";
  } else if (x1 + y1 == x2 + y2 || x1 - y1 == x2 - y2) {
    cout << "1\n";
  } else {
    cout << "2\n";
  }
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
