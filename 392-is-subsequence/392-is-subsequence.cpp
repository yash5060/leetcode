class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        
    int s1=t.size();
    int s2=s.size();
        int j=0;
        
        for(int i=0;i<s1;i++ )
        {
            if(s[j]==t[i])
                j++;
        }
        if(j==s2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};