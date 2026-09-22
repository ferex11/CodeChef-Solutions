string solve(int N, int X, const vector<int>& A) {
  bool found = false;
  for (int i = 0; i < N; i++) {
    if (A[i] == X) {
      return "NO";
    }
  }
  return "YES";
}
