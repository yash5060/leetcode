void helper(vector<int>& nums,int i,vector<int>&ans)
{
    if(i>=nums.size())
    {
        return;
    }
    
    int l=ans.back();
    ans.push_back(l+nums[i]);
    helper(nums,i+1,ans);
    
    
}


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int>ans;
        ans.push_back(nums[0]);
         helper(nums,1,ans);
        return ans;
        
    }
};