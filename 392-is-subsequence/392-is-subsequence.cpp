class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int n1=t.size();
        int n2=s.size();
        int j=0;
        
        for(int i=0;i<n1;i++)
        {
            if(s[j]==t[i])
            {
                j++;
            }
        }
        return j==n2;
    }
};