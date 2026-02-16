class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // sliding window
        int n=nums.size(),i=0;
        double ans=-1e18,curr=0.0;
        while(i<n){
            curr+=nums[i];
            if(i>=k){
                curr-=nums[i-k];
            }
            if(i >= k - 1){
                ans = max(ans, curr);
            }
            i++;
        }
        return ans/k;
    }
};