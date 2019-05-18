class Solution {
private:
    TreeNode* reConstructBinaryTree(vector<int> pre, int preLeft, int preRight,
                                    vector<int> in, int inLeft, int inRight) {
        if (preRight < preLeft)
            return NULL;
        TreeNode *root = new TreeNode(pre[preLeft]);
        for (int i = inLeft; i <= inRight; ++i) {
            if (in[i] == pre[preLeft]) {
                root->left = reConstructBinaryTree(pre, preLeft+1, preLeft+i-inLeft, in, inLeft, i-1);
                root->right = reConstructBinaryTree(pre, preRight-inRight+i+1, preRight, in, i+1, inRight);
                break;
            }
        }
        return root;
    }
public:
    TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> in) {
        return reConstructBinaryTree(pre, 0, pre.size()-1, in, 0, in.size()-1);
    }
};
