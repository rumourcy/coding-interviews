// O(m+n)
#include <vector>
using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int>> array) {
        bool flag = false;
        int m = array.size(), n = array[0].size();
        int i = m - 1, j = 0;
        while (i >= 0 && j < n && !flag) {
            if (array[i][j] == target)
                flag = true;
            else if (array[i][j] < target)
                ++j;
            else
                --i;
        }
        return flag;
    }
};