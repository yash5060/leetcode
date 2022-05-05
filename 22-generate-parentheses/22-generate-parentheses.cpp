class Solution {
    
    void solve(int open, int close , string s,vector<string> &ans,int n ){
        
        if(s.length()==n*2){
            ans.push_back(s);
            return ;
        }
        
        
        if(open<n)            
            solve(open+1, close, s+'(' , ans,n);
        
        
        if(open>close)
            solve(open, close+1, s + ')', ans,n);
    }
    
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        
        string s= "";
        int open = 0;
        int close = 0;
        
        
        solve(open, close ,s, ans,n);
        return ans;
        
    }
};