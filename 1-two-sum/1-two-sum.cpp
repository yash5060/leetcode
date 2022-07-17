class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> x;
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                   x.push_back(i);
                    x.push_back(j);
                    break;
                }
            }
        }
        
         nums.clear();
        nums.push_back(x[0]);
        nums.push_back(x[1]);
        
        return nums;
        
    }
};