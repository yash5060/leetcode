class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        
        int div;
        string s;
        while(columnNumber>=1)
        {
            div=columnNumber%26;
            if(div==0)
            {
                div=26;
                columnNumber--;
            }
            char c= div+65-1;
            columnNumber=columnNumber/26;
            
          
            s=s+c;
        }
       reverse(s.begin(), s.end());
        return s;
    }
};