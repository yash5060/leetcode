class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int sz=nums.size();
        int st=0;
        int ed=sz-1;;
    
        while(st<=ed)
        {
            int mid=(st+ed)/2;
            
            if(nums[mid]>target)
            {
                ed=mid-1;
            }
            else if(nums[mid]<target)
            {
                st=mid+1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
        
    }
};