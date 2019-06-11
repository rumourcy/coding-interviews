# O(lg(n))
class Solution {
public:
  double Power(double base, int exponent) {
    if (exponent == 0)
      return 1;
    else if (exponent == 1)
      return base;
    else if (exponent == -1)
      return 1 / base;
    double tmp = Power(base, exponent / 2);
    if (exponent % 2 == 0)
      return tmp * tmp;
    else if (exponent > 0)
      return tmp * tmp * base;
    else
      return tmp * tmp * (1 / base);
  }
};
