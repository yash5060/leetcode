class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
      if(nums.size()==0) 
      {
        return 0;
      }
      sort(nums.begin(),nums.end());
      
      // int x=nums[0];
      int count=0;
      int mx=0;
      
      for(int i=1;i<nums.size();i++)
      {
        if(nums[i]==nums[i-1]+1)
        {
          count++;
        }
        else if(nums[i]==nums[i-1])
        {
          
        }
        else{
          count=0;
        }
        mx=max(mx,count);
      }
      return mx+1;
    }
};