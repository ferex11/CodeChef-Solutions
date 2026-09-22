TreeNode* deserialize(vector<int>& arr) {
  int n = arr.size();
  if (n == 0 || arr[0] == -1)
    return NULL;
  int ind = 1;
  TreeNode* root = new TreeNode(arr[0]);
  queue<TreeNode*> q;
  q.push(root);
  while (!q.empty() && ind < n) {
    TreeNode* node = q.front();
    q.pop();
    if (ind < n) {
      if (arr[ind] != -1) {
        TreeNode* leftChild = new TreeNode(arr[ind]);
        node->left = leftChild;
        q.push(leftChild);
      }
      ind++;
    }
    if (ind < n) {
      if (arr[ind] != -1) {
        TreeNode* rightChild = new TreeNode(arr[ind]);
        node->right = rightChild;
        q.push(rightChild);
      }
      ind++;
    }
  }
  return root;
}
vector<int> serialize(TreeNode* root) {
  vector<int> res;
  if (!root) return res;
  queue<TreeNode*> q;
  q.push(root);
  while (!q.empty()) {
    TreeNode* node = q.front();
    q.pop();
    if (node == NULL) {
      res.push_back(-1);
    } else {
      res.push_back(node->val);
    }
    if (node != NULL) {
      q.push(node->left);
      q.push(node->right);
    }
  }
  while (!res.empty() && res.back() == -1)
    res.pop_back();
  return res;
}
