/*
  struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
  TreeNode(int x) :
  val(x), left(NULL), right(NULL) {}
  };
*/
class Solution {
private:
  vector<int> res;
  queue<TreeNode*> q;
public:
  vector<int> PrintFromTopToBottom(TreeNode* root) {
    if (root == NULL) return res;
    q.push(root);
    TreeNode* tmp = NULL;
    while (!q.empty()) {
      tmp = q.front();
      res.push_back(tmp->val);
      q.pop();
      if (tmp->left != NULL) q.push(tmp->left);
      if (tmp->right != NULL) q.push(tmp->right);
    }
    return res;
  }
};
