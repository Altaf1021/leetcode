class Solution {
public:
    double solve(double p,double r,double c,vector<vector<double>>&dp){
    if(r==0 && c==0)return p;
    if(r<0 || c<0 || c>r)return 0.0;
    if(dp[r][c]!=-1.0)return dp[r][c];
    double up_left=solve(p,r-1,c-1,dp);
    up_left=max(0.0, (up_left - 1.0) / 2.0);

    double up_right=solve(p,r-1,c,dp);
    up_right=max(0.0, (up_right - 1.0) / 2.0);

    return dp[r][c]=up_left+up_right;
}
    double champagneTower(int p, int r, int c) {
        vector<vector<double>>dp(r+1,vector<double>(c+1,-1.0));
        double ans=solve(p,r,c,dp);
        return min(1.0, ans);
    }
};