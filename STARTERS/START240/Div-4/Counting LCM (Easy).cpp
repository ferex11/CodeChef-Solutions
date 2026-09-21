#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define sp ' '
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

const int MAXN = 1000010;
vector<int> spf(MAXN, 0);
void precompute_spf() {
  for (int i = MAXN - 1; i >= 2; i--) {
    for (int j = i; j < MAXN; j += i) {
      spf[j] = i;
    }
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  precompute_spf();
  int t;
  cin >> t;
  while(t--) {
    ll Z;
    cin >> Z;
    ll ans = Z * Z - 1;
    for (int i = 2; i <= Z; i++) {
      ll ways = 1;
      int x = i;
      while (x > 1) {
        int p = spf[x];
        int cnt = 0;
        while (x % p == 0) {
          x /= p;
          cnt++;
        }
        ways *= (2 * cnt + 1);
      }
      ans -= ways;
    }
    cout << ans << endl;
  }
  return 0;
}
