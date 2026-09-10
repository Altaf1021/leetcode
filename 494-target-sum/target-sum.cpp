class Solution {
public:
    int fun(vector<int>& nums, int target,int curr,int i){
        // base case
        if(i<0){
            if(curr==target)return 1;
            return 0;
        }
        int plus=fun(nums,target,curr+nums[i],i-1);
        int minus=fun(nums,target,curr-nums[i],i-1);

        return plus+minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        return fun(nums,target,0,n-1);
    }
};