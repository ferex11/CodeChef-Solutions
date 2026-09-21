#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int minVal = 101;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] < minVal)
      minVal = a[i];
  }
  int count = 0;
  for (auto& it : a) {
    if (it == minVal) 
      count++;
  }
  if (count >= 2)
    cout << "YES" << endl;
  else 
    cout << "NO" << endl;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
