class Solution {
public:
    void reverseString(vector<char>& s) {
        
        char temp;
        int sz =s.size();
        
        for(int i=0;i<sz/2;i++)
        {
            temp=s[i];
            s[i]=s[sz-i-1];
            s[sz-i-1]=temp;
        }
        
    }
};