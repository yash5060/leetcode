void solver(int n1,int n2,string &s,vector<string>&ans)
{
    if(n1==0 &&n2==0)
    {
        ans.push_back(s);
        return;
    }
    if(n1>0)
    {
        s.push_back('(');
        solver(n1-1,n2,s,ans);
        s.pop_back();
        
    }
    if(n2>0)
    {
        if(n1<n2)//yha pe n1<n2 aayega n ki n2<n1 kuki ye define kr rha h bachi hui parenthesis
        {
            s.push_back(')');
            solver(n1,n2-1,s,ans);
            s.pop_back();
        }
    }
    
}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        string s;
        vector<string>ans;
        solver(n,n,s,ans);
        return ans;
        
    }
};