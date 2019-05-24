class Solution {
private:
  int f[40];
public:
  int Fibonacci(int n) {
    if (n <= 1)
      return n;
    if (f[n] == 0)
      f[n] = Fibonacci(n-1) + Fibonacci(n-2);
    return f[n];
  }
};
