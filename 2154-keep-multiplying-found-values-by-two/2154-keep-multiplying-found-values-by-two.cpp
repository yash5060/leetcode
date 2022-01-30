class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        bool check=true;
        
        while(check)
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
                check=false;
            }
        }
        return original;
    }
};