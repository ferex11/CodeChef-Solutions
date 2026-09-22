#include<bits/stdc++.h>
using namespace std;

void solve() {
  int X, Y;
  cin >> X >> Y;
  if (Y >= X) {
    cout << "UNLOCKED\n";
  } else {
    cout << X - Y << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
