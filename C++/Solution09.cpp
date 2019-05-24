#include<cmath>
using namespace std;
 
class Solution {
public:
  int jumpFloorII(int number) {
    return (int)pow(2, number-1);
  }
};
