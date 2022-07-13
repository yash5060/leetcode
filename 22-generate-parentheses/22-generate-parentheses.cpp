class Solution {
public:
  
  void solver(int open,int close,vector<string> &ans,string &an)
  {
    //base case
    if(open==0 && close==0)
    {
      ans.push_back(an);
      return;
    }
    
    
    //opening
    if(open>0)
    {
      an.push_back('(');
      solver(open-1,close,ans,an);
      an.pop_back();
    }
    
    //closing
    if(close>0 && close>open)
    {
       an.push_back(')');
      solver(open,close-1,ans,an);
      an.pop_back();

    }
    
    
  }
    vector<string> generateParenthesis(int n) {
      
      vector<string>ans;
      string an="";
      solver(n,n,ans,an);
      return ans;
        
    }
};