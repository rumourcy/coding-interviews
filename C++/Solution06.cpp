class Solution {
private:
    int minNumberInRotateArray(vector<int> &rotateArray, int low, int high) {
        if (low >= high || rotateArray[low] < rotateArray[high])
            return rotateArray[low];
        int mid = (low + high) / 2;
        if (rotateArray[mid] > rotateArray[low])
            return minNumberInRotateArray(rotateArray, mid+1, high);
        else if (rotateArray[mid] < rotateArray[low])
            return minNumberInRotateArray(rotateArray, low, mid);
        else {
            int tmp1 = minNumberInRotateArray(rotateArray, low, mid-1);
            int tmp2 = minNumberInRotateArray(rotateArray, mid+1, high);
            return tmp1 <= tmp2 ? tmp1 : tmp2;
        }
    }
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if (rotateArray.size() == 0)
            return 0;
        return minNumberInRotateArray(rotateArray, 0, rotateArray.size()-1);
    }
};
