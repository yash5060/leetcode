class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int num=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<=nums[i+1])
            {
                continue;
            }
            num++;
            if(num>=2)
                return false;
           if(i==0)
           {
               nums[i]=nums[i+1];
               continue;
           }
            if(nums[i-1]>nums[i+1])
            {
                nums[i+1]=nums[i];
            }
            else
            {
                nums[i]=nums[i+1];
            }
        }
        return true;
    }
};