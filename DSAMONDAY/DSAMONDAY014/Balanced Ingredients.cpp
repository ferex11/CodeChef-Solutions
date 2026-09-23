#include<bits/stdc++.h>
using namespace std;

vector<int> a;
bool found = false;

void check(int i, vector<int>& v) {
  if (i == 4) {
    if (!v.empty()) {
      long long sum = 0;
      for (int x : v) {
        sum += x;
      }
      if (sum == 0) {
        found = true;
      }
    }
    return;
  }
  v.push_back(a[i]);
  check(i + 1, v);
  v.pop_back();
  check(i + 1, v);
}

void solve() {
  a.resize(4, 0);
  cin >> a[0] >> a[1] >> a[2] >> a[3];
  vector<int> v;
  check(0, v);
  if (found) {
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
