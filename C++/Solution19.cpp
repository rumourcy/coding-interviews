class Solution {
public:
    vector<int> printMatrix(vector<vector<int>> matrix) {
        int h = matrix.size();
        int w = matrix[0].size();
        int count = 0;
        vector<int> res;
        while (w > 0 && h > 0) {
            for (int i = 0; i < w - 1; ++i) res.push_back(matrix[count][i+count]);
            for (int i = 0; i < h - 1; ++i) res.push_back(matrix[i+count][w-1+count]);
            
            if (w == 1) {
                res.push_back(matrix[h-1+count][count]);
                break;
            } else if (h == 1) {
                res.push_back(matrix[count][w-1+count]);
                break;
            }
            
            for (int i = 0; i < w - 1; ++i) res.push_back(matrix[h-1+count][w-1+count-i]);
            for (int i = 0; i < h - 1; ++i) res.push_back(matrix[h-1+count-i][count]);
            
            w -= 2;
            h -= 2;
            ++count;
        }
        return res;
    }
};
