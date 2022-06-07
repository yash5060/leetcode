class Solution {
public:
  
  int solver(int n,vector<int>&dp)
  {
    if(n==1)
    {
      // count++;
      return 1 ;
    }
    if(n==2)
    {
      return 2;
    }
    if(dp[n]!=-1)
    {
      return dp[n];
    }
    int one=solver(n-1,dp);
    int two=solver(n-2,dp);
    return dp[n] = one+two;
    
     
  }
  
    int climbStairs(int n) {
      int cn=0;
      
      vector<int>dp(n+1,-1);
      return solver(n,dp);
        // return cn;
    }
};