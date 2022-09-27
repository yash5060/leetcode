class Solution {
public:
    int findMin(vector<int>& nums) {
      
      int st=0;
      int ed=nums.size()-1;
      int mid;
      
      
      while(st<ed)
      {
         mid=((st+ed)/2);
        
        if(st==ed)
        {
          return nums[st];
        }
         
        
        if(nums[mid]>=nums[ed])
        {
          st=mid+1;
        }
        else {
          ed=mid;
        }
      }
      
      return nums[st];
        
    }
};