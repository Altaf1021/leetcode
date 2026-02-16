class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long curr=0;
        int n=nums.size();
        int ans=1e5+1;
        int i=0,j=0;
        while(i<n){
            curr+=nums[i];
            while(curr-nums[j]>=target && j<i){
                curr-=nums[j];
                j++;
            }
            if(curr>=target)ans=min(ans,i-j+1);
            i++;
        }
        return ans!=1e5+1 ? ans : 0;
    }
};