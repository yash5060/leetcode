class Solution {
public:
    char findTheDifference(string s, string t) {
        
        
        int sum1=0;
        int sum2=0;
        
        for(int i=0;i<s.size();i++)
        {
            sum1=sum1+s[i];
        }
        for(int i=0;i<t.size();i++)
        {
            sum2=sum2+t[i];
        }
        
        int an=sum2-sum1;
        
        char ans=an;
        return ans;
    }
};