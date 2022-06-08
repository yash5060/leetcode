class Solution {
public:
    bool digitCount(string nums) {
      
      vector<int>an(11,0);
      
      for(int i=0;i<nums.size();i++)
      {
        
        int a=nums[i]-48;
        an[a]++;
      }
      
      
      for(int i=0;i<nums.size();i++)
      {
        int x=nums[i]-48;
        
        if(x!=an[i])
        {
          return false;
        }
      }
      return true;
    }
};