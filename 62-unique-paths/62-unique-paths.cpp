class Solution {
public:
  
  
  int solver(int i,int j,int m,int n,vector<vector<int>> &dp)
  {
    if(i>=m || j>=n)
    {
      return 0;
    }
    if(i==(m-1) && j==(n-1))
    {
      return 1;
    }
    if(dp[i][j]!=-1)
    {
      return dp[i][j];
    }
           
    
      int x1=solver(i+1,j,m,n,dp);
   
      int x2=solver (i,j+1,m,n,dp);
    dp[i][j]=x1+x2;
    
    return x1+x2;
    
  }
    int uniquePaths(int m, int n) {
      
    vector<vector<int>> dp(101,vector<int>(101,-1));
      
      
     return solver(0,0,m,n,dp);
        
    }
};