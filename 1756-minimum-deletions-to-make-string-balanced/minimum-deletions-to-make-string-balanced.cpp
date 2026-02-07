class Solution {
public:
    int minimumDeletions(string s) {
        int a_right = 0;
        for (char c : s) {
            if (c == 'a') a_right++;
        }
        
        int b_left = 0;
        int min_deletions = a_right;
        
        for (char c : s) {
            if (c == 'a') {
                a_right--;
            } else {
                b_left++;
            }
            min_deletions = min(min_deletions, b_left + a_right);
        }
        return min_deletions;
    }
};