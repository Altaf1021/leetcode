class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        int max_len = 0;
        for (int i = 0; i < n; ++i) {
            map<char,int>mpp;
            for (int j = i; j < n; ++j) {
                mpp[s[j]]++;
                int ans=-1;
                bool flag=true;
                for(auto it:mpp){
                    if(ans==-1)ans=it.second;
                    if(it.second!=ans){
                        flag=false;
                        break;
                    }
                }
                if(flag)max_len=max(max_len,j-i+1);
            }
        }
        return max_len;
    }
};