#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define sp ' '
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--) {
    int N;
    cin >> N;
    int mx = 0;
    unordered_map<int, int> freq;
    for (int i = 0; i < N; i++) {
      ll x;
      cin >> x;
      freq[x]++;
      mx = max(mx, freq[x]);
    }
    cout << N - mx + 1 << endl;
  }
  return 0;
}
