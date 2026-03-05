class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int costA = 0, costB = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] != (char)('0' + i % 2)) costA++;
            if (s[i] != (char)('1' - i % 2)) costB++;
        }
        
        return min(costA, costB);
    }
};