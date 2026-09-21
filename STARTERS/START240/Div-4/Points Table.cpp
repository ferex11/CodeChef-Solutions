#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

void solve() {
  int x, y, a, b;
  cin >> x >> y >> a >> b;
  if (x < a || (x == a && y < b))
    cout << "Bob";
  else 
    cout << "Alice";
    
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
