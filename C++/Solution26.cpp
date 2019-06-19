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
public:
  TreeNode* Convert(TreeNode* pRootOfTree)
  {
    if (pRootOfTree == NULL)
      return pRootOfTree;
    TreeNode* high = Convert(pRootOfTree->right);
    pRootOfTree->right = high;
    if (high != NULL)
      high->left = pRootOfTree;
    TreeNode* low = Convert(pRootOfTree->left);
    TreeNode* tmp = low;
    while (tmp != NULL && tmp->right != NULL)
      tmp = tmp->right;
    pRootOfTree->left = tmp;
    if (tmp != NULL)
      tmp->right = pRootOfTree;
    return low != NULL ? low : pRootOfTree;
  }
};
