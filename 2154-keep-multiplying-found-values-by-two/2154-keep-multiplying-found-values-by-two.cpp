class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        
        
        while(1)
        {
            int i=0;
            for(i=0;i<nums.size();i++)
            {
                if(nums[i]==original)
                {
                    original=original*2;
                    break;
                }
             
            }
             if(i==nums.size())
            {
               break;
            }
        }
        return original;
    }
};