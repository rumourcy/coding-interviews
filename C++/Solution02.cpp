// O(n)

class Solution {
public:
    void replaceSpace(char *str,int length) {
        int count = 0;
        for (int i = 0; i < length; ++i)
            if (str[i] == ' ')
                ++count;
        for (int i = length-1; i >= 0; --i) {
            if (str[i] != ' ')
                str[i+2*count] = str[i];
            else {
                str[i+2*count] = '0';
                str[i+2*count-1] = '2';
                str[i+2*count-2] = '%';
                --count;
            }
        }
    }
};
