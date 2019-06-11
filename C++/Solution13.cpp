class Solution {
public:
  void reOrderArray(vector<int> &array) {
    int i = 0, j;
    while (i < array.size()) {
      while (i < array.size() && !isEven(array[i]))
        ++i;
      j = i + 1;
      while (j < array.size() && isEven(array[j]))
        ++j;
      if (j < array.size()) {
        int tmp = array[j];
        for (int k = j; k > i; k--)
          array[k] = array[k-1];
        array[i] = tmp;
      } else
        break;
    }
  }

  bool isEven(int a) {
    return a % 2 == 0;
  }
};
