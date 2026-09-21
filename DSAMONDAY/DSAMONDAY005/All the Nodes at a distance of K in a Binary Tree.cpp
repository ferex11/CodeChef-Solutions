class Solution {
private:
  void markParent(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& markParent) {
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
      TreeNode* curNode = q.front();
      q.pop();
      if (curNode->left) {
        markParent[curNode->left] = curNode;
        q.push(curNode->left);
      }
      if (curNode->right) {
        markParent[curNode->right] = curNode;
        q.push(curNode->right);
      }
    }
  }
public:
  vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    vector<int> ans;
    if (!root) return ans;
    unordered_map<TreeNode*, TreeNode*> parentTrack;
    markParent(root, parentTrack);
    unordered_map<TreeNode*, bool> vis;
    queue<TreeNode*> q;
    q.push(target);
    int dist = 0;
    vis[target] = true;
    while (!q.empty()) {
      int size = q.size();
      if (dist == k) {
        break;
      }
      dist++;
      for (int i = 0; i < size; i++) {
        TreeNode* node= q.front();
        q.pop();
        if (node->left && !vis[node]) {
          vis[node->left] = true;
          q.push(node->left);
        }
        if (node->right && !vis[node]) {
          vis[node->right] = true;
          q.push(node->right);
        }
        if (parentTrack[node] && !vis[parentTrack[node]]) {
          vis[parentTrack[node]] = true;
          q.push(parentTrack[node]);
        }
      }
    }
    while (!q.empty()) {
      ans.push_back(q.front()->val);
      q.pop();
    }
    return ans;
  }
};
