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
  string a, b;
  cin >> a >> b;
  vector<int> aones, bones;
  for (int i = 0; i < n; i++) {
    if (a[i] == '1') aones.pb(i);
    if (b[i] == '1') bones.pb(i);
  }
  if (aones.size() != bones.size()) {
    cout << "-1" << endl;
    return;
  }
  int diff = 0;
  for (int i = 0;  i < (int) aones.size(); i++) {
    if (aones[i] != bones[i]) diff++;
  }
  cout << diff << endl;

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
