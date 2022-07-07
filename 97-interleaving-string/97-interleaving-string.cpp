class Solution {
  
  public:
  
  
  
  bool solver(string s1,string s2,string s3,int i,int j,int dp[201][201])
  {
    if(i==s1.size() && j==s2.size())
      return true;
    
    if(dp[i][j]!=-1)
    {
      return dp[i][j];
    }
    
    if( i<s1.size() &&  s1[i]==s3[i+j])
    {
      bool x1=solver(s1,s2,s3,i+1,j,dp);
      dp[i][j]=x1;
      if(x1==true)
        return true;
    }
    
     if( j<s2.size() &&  s2[j]==s3[i+j])
    {
      bool x2=solver(s1,s2,s3,i,j+1,dp);
       dp[i][j]=x2;
      if(x2==true)
        return true;
    }
    dp[i][j]=false;
    return false;
  }
  

    bool isInterleave(string s1, string s2, string s3) {
      
      if(s1.size()+s2.size()!=s3.size())
      {
        return false;
      }
      
      int dp[201][201];
      for(int i=0;i<201;i++)
      {
        for(int j=0;j<201;j++)
        {
          dp[i][j]=-1;
        }
      }
      
      return solver(s1,s2,s3,0,0,dp);
        
    }
};