class Solution {
public:
    int removePalindromeSub(string s) {
      
      if(s.size()==0)return 0;
      string y=s;
      reverse(s.begin(), s.end());
      if(s==y) return 1;
      return 2;
      
        
    }
};