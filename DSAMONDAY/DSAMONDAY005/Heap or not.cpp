string isMinHeap(int A[], int N) {
  bool found = false;
  for (int i = 0; i < N / 2; i++) {
    if (2 * i + 1 < N && A[i] > A[2 * i + 1])
      return "NO";
    if (2 * i + 2 < N && A[i] > A[2 * i + 2])
      return "NO";
  }
  return "YES";
}
