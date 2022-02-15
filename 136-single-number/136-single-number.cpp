class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans;
        
        
        if(nums.size()>1)
        {
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
            {
                i++;
            }
            else
            {
                ans=nums[i];
                break;
            }
        }
        }
        else
        {
            ans=nums[0];
        }
        
        return ans;
        
    }
};