class Solution {
public:
    int solve(vector<int>&nums,int i,vector<int>&dp)
    {
        if(i>=nums.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        //take
        int Choose= nums[i]+solve(nums,i+2,dp);
        //don't
        int notChoose=solve(nums,i+1,dp);
        return dp[i]=max(Choose,notChoose);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return solve(nums,0,dp);
    }
};