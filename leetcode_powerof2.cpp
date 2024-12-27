class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i = 0;
        bool ans = false;
        while (i <= 30) {
            int value = pow(2, i);
            if (value == n) {
                return true;
            }
            i++;
        }
        return ans;
    }
};