#include<bits/stdc++.h>
using namespace std;

class SegmentTree {
private:
  int n;
  vector<int> ar;
  vector<int> tree;
  void build(int ind, int low, int high) {
    if (low == high) {
      tree[ind] = ar[low];
      return;
    }
    int mid = (low + high) / 2;
    build(2 * ind + 1, low, mid);
    build(2 * ind + 2, mid + 1, high);
    tree[ind] = min(tree[2 * ind + 1], tree[2 * ind + 2]);
  }
  int query(int ind, int low, int high, int l, int r) {
    if (l > high || r < low) {
      return INT_MAX;
    }
    if (l <= low && high <= r) {
      return tree[ind];
    }
    int mid = (low + high) / 2;
    int left = query(2 * ind + 1, low, mid, l, r);
    int right = query(2 * ind + 2, mid + 1, high, l, r);
    return min(left, right);
  }
  void update(int ind, int low, int high, int pos, int val) {
    if (low == high) {
      tree[ind] = val;
      return;
    }
    int mid = (low + high) / 2;
    if (pos <= mid) {
      update(2 * ind + 1, low, mid, pos, val);
    } else {
      update(2 * ind + 2, mid + 1, high, pos, val);
    }
    tree[ind] = min(tree[2 * ind + 1], tree[2 * ind + 2]);
  }
public:
  SegmentTree(vector<int>& input) {
    ar = input;
    n = ar.size();
    tree.resize(4 * n);
    build(0, 0, n - 1);
  }
  int getMin(int l, int r) {
    return query(0, 0, n - 1, l, r);
  }
  void swapValue(int pos, int val) {
    update(0, 0, n - 1, pos, val);
  }
};

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  SegmentTree st(a);
  int q;
  cin >> q;
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int l, r;
      cin >> l >> r;
      l--;
      r--;
      swap(a[l], a[r]);
      st.swapValue(l, a[l]);
      st.swapValue(r, a[r]);
    } else {
      int l, r;
      cin >> l >> r;
      l--;
      r--;
      cout << st.getMin(l, r) << "\n";
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
