class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
      //first
      
      int st=0;
      int ed=nums.size()-1;
      int r1=-1;
      vector<int>ans;
      
      while(st<=ed)
      {
        int mid=(st+ed)/2;
        
        if(nums[mid]==target)
        {
          r1=mid;
          // break;
          ed=mid-1;
        }
        else if(nums[mid]<target)
        {
          st=mid+1;
        }
        else if(nums[mid]>target)
        {
          ed=mid-1;
        }
        cout<<r1<<" ";
      }
       ans.push_back(r1);
      
      //second
      
      st=0;
      ed=nums.size()-1;
      int r2=-1;
      
       while(st<=ed)
      {
        int mid=(st+ed)/2;
        
        if(nums[mid]==target)
        {
         
          r2=mid;
          // break;
          st=mid+1;
         cout<<r2<<" "<<"abc"<<" "; 
        }
        else if(nums[mid]<target)
        {
          st=mid+1;
        }
        else if(nums[mid]>target)
        {
          ed=mid-1;
        }
         cout<<r2<<" ";
      }
      
      ans.push_back(r2);
       return ans;
    }
};