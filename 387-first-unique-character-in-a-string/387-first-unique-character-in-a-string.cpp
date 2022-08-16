class Solution {
public:
    int firstUniqChar(string s) {
      
      vector<int>hsh(26,0);
      
      for(int i=0;i<s.size();i++)
        hsh[s[i]-97]++;
      
      for(int i=0;i<s.size();i++)
      {
        int y=s[i]-97;
        if(hsh[y]==1)
          return i; 
      }
      return -1;  
    }
};