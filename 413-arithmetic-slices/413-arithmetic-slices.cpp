class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        if(nums.size()<3)
        {
            return 0;
        }
        int res=0;
        
        int dif=nums[1]-nums[0];
        int count=2;
        
        for(int i=2;i<nums.size();i++)
        {
            if(dif==nums[i]-nums[i-1])
            {
                count++;
            }
            else
            {
                count=2;
                dif=nums[i]-nums[i-1];
            }
            if(count>2)
            {
                res+=count-2;
            }
        }
        
        return res;
        
    }
};