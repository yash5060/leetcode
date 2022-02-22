class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        
        int ans=0;
        int d;
        
        for(int i=0;i<columnTitle.size();i++)
        {
            int x=columnTitle[i];
            d=x-65+1;
            ans=ans*26+d;
        }
      
        return ans;
    }
};