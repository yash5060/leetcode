class Solution {
public:
    bool isPalindrome(int x) {
        
        string st = to_string(x);
        string y=st;
        
        reverse(y.begin(), y.end());
        if(y==st)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};