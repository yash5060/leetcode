class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int>x;
        vector<int>y;
        
        for(int i=0;i<26;i++)
        {
            x.push_back(0);
            y.push_back(0);
        }
        
        for(int i=0;i<s.size();i++)
        {
            int temp=s[i]-97;
            x[temp]++;
        }
        
        for(int i=0;i<t.size();i++)
        {
            int temp=t[i]-97;
            y[temp]++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(x[i]!=y[i])
            {
                return false;
            }
        }
        return true;
    }
};