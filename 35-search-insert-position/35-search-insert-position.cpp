class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int ans;
        for(int i=0;i<nums.size();i++)
        {
            if(target==nums[i])
            {
                ans=i; 
                break;
            }
            else if(target<nums[i])
            {
                ans=i;
                break;
            }
        }
        
        
        return ans;
    }
};