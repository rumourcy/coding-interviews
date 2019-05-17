public class Solution {
    public boolean Find(int target, int [][] array) {
        boolean flag = false;
        int m = array.length, n = array[0].length;
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
}