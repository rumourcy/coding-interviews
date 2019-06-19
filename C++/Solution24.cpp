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
  vector<vector<int>> res;
  vector<int> path;
public:
  vector<vector<int>> FindPath(TreeNode* root,int expectNumber) {
    if (root == NULL) return res;
    expectNumber -= root->val;
    path.push_back(root->val);
    if (expectNumber == 0 && root->left == NULL && root->right == NULL) {
      vector<int> tmp(path.begin(), path.end());
      res.push_back(tmp);
    }
    if (root->left != NULL) FindPath(root->left, expectNumber);
    if (root->right != NULL) FindPath(root->right, expectNumber);
    path.pop_back();
    return res;
  }
};
