#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<long long> value;
long long ans = 0;

void dfs(int u, long long mn, long long mx) {
  ans = max(ans, abs(value[u] - mn));
  ans = max(ans, abs(value[u] - mx));
  mn = min(mn, value[u]);
  mx = max(mx, value[u]);
  for (int v : adj[u]) {
    dfs(v, mn, mx);
  }
}

void solve() {
  int n;
  cin >> n;
  value.resize(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> value[i];
  }
  adj.resize(n + 1, {});
  int root = -1;
  for (int i = 1; i <= n; i++) {
    int p;
    cin >> p;
    if (p == -1) {
      root = i;
    } else {
      adj[p].push_back(i);
    }
  }
  dfs(root, value[root], value[root]);
  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
