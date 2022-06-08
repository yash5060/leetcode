class Solution {
public:
    int solve(vector<int>&nums,int target,int i,unordered_map<string,int>&dp)
    {
      if(i==nums.size())
      {
        if(target==0)
          return 1;
        return 0;
      }
      
    string str= to_string(i)+" "+to_string(target);
      if(dp.find(str)!=dp.end())
        return dp[str];
     int p1= solve(nums,target+nums[i],i+1,dp);
    
     int p2= solve(nums,target-nums[i],i+1,dp);
      return dp[str]=p1+p2;
      
    }
    int findTargetSumWays(vector<int>& nums, int target) {
      unordered_map<string,int>dp;
        return solve(nums,target,0,dp);
    }
};