// f(n) = f(n-1) + f(n-2)
class Solution {
public:
  int rectCover(int number) {
    int pp = 1, p = 2, res = number;
    for (int i = 3; i <= number; ++i) {
      res = pp + p;
      pp = p;
      p = res;
    }
    return res;
  }
};
