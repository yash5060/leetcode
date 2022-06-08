class Solution {
public:
    int removePalindromeSub(string s) {
      
     
      string y=s;
      reverse(s.begin(), s.end());
      if(s==y) return 1;
      return 2;
      
        
    }
};