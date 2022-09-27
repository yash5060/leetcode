class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        
        int st=0;
      int ed=nums.size()-1;
      int mid;
      int piv;
      
      
      while(st<ed)
      {
         mid=((st+ed)/2);
        
        if(st==ed)
        {
          piv=st;
          break;
        }
         
        
        if(nums[mid]>=nums[ed])
        {
          st=mid+1;
        }
        else {
          ed=mid;
        }
      }
      
      piv=st;
      
      int s1=0;
      int e1=piv-1;
      
      while(s1<=e1)
      {
        int m1=(s1+e1)/2;
        if(nums[m1]==target)
        {
          return m1;
        }
         if(s1==e1)
        {
          break;
        }
         if(nums[m1]<target)
        {
          s1=m1+1;
        }
         if(nums[m1]>target)
        {
          e1=m1;
        }
       
      }
      int s2=piv+1;
      int e2=nums.size()-1;
        
       while(s2<=e2)
      {
        int m2=(s2+e2)/2;
        if(nums[m2]==target)
        {
          return m2;
        }
         if(s2==e2)
         {
           break;
         }
         if(nums[m2]<target)
        {
          s2=m2+1;
        }
         if(nums[m2]>target)
        {
          e2=m2;
        }
         
      }
      if(nums[piv]==target)
      {
        return piv;
      }
      return -1;
        
    }
};