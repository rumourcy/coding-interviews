class Solution {
private:
  bool isBST(vector<int> &sequence, int l, int r) {
    if (l >= r) return true;
    int m1 = l, m2 = r;
    for (int i = l; i < r; ++i) {
      if (sequence[i] < sequence[r])
        ++m1;
      else
        break;
    }
    for (int i = r - 1; i >= l; --i) {
      if (sequence[i] > sequence[r])
        --m2;
      else
        break;
    }
    if (m1 == m2)
      return isBST(sequence, l, m1-1) && isBST(sequence, m1, r-1);
    else
      return false;
  }
public:
  bool VerifySquenceOfBST(vector<int> sequence) {
    if (sequence.size() == 0) return false;
    return isBST(sequence, 0, sequence.size()-1);
  }
};
