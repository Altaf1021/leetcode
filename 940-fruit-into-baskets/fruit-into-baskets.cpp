class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int n=nums.size();
        int ans=1;
        int i=0,j=0;
        unordered_map<int,int>mpp;
        while(i<n){
            mpp[nums[i]]++;
            while(mpp.size()>2 && j<i){
                mpp[nums[j]]--;
                if(mpp[nums[j]]==0)mpp.erase(nums[j]);
                j++;
            }
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};