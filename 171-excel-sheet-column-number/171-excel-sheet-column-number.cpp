class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        
        long long ans;
        
        int ln=columnTitle.size();
        
        int arr[ln];
        
        for(int i=0;i<ln;i++)
        {
            int x=columnTitle[i];
            arr[i]=x-65+1;
        }
        long long sum=0;
        long long mul=1;
        
        for(int i=0;i<ln-1;i++)
        {
            mul=1;
            for(int j=1;j<ln-i;j++)
            {
                mul=mul*26;
            }
            mul=mul*arr[i];
            sum=sum+mul;
        }
        
        ans=sum+arr[ln-1];
       
        
        return ans;
    }
};