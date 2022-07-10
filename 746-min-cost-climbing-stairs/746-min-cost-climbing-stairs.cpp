class Solution {
public:
  
  int solver(vector<int>& cost,int index,vector<int> &dp)
  {
    
    if(index>=cost.size())
    {
        return 0;
    }
    if(dp[index]!=-1)
    {
      return dp[index];
    }
    //one
    return dp[index]= cost[index]+min(solver(cost,index+1,dp),solver(cost,index+2,dp));
    
  }
    int minCostClimbingStairs(vector<int>& cost) {
      
      vector<int>dp(1001,-1);
      
      int x1=solver(cost,0,dp);
      int x2=solver(cost,1,dp);
      return min(x1,x2);
        
    }
};