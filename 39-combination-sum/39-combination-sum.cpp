class Solution {
public:
  
  void solver(vector<int>& candidates,int target,vector<vector<int>>&ans,vector<int>&an,int i)
  {
    //base case
    if(i>=candidates.size())
    {
      if(target==0)
      {
        ans.push_back(an);
        return;
      }
      return;
    }

    //pick
    
    if(candidates[i]<=target)
    {
      an.push_back(candidates[i]);
      solver(candidates,target-candidates[i],ans,an,i);
      an.pop_back();
    }

    //donotpick
    solver(candidates,target,ans,an,i+1);
 
  }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      
      
      vector<vector<int>>ans;
      vector<int>an;
      solver(candidates,target,ans,an,0);
      return ans;
        
    }
};