#include<bits/stdc++.h>
using namespace std;

void solve() {
  int a, x, b, y;
  cin >> a >> x >> b >> y;
  if (a * x == b * y) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
