class Solution {
private:
  stack<int> s;
public:
  bool IsPopOrder(vector<int> pushV,vector<int> popV) {
    vector<int>::iterator it = popV.begin();
    for (vector<int>::iterator i = pushV.begin(); i < pushV.end(); ++i) {
      s.push(*i);
      while (!s.empty() && s.top() == *it) {
        s.pop();
        ++it;
      }
    }
    return s.empty();
  }
};
