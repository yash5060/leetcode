class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        
        long long ans=0;
        int d;
        
        int ln=columnTitle.size();
        
        int arr[ln];
        
        for(int i=0;i<ln;i++)
        {
            int x=columnTitle[i];
            d=x-65+1;
            ans=ans*26+d;
        }
        
        
        
       
        
        return ans;
    }
};