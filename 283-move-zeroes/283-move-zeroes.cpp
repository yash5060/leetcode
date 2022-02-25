class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int top=0,bot=0;
        while(top<nums.size()){
            if(nums[top]==0) top++;
            else if(nums[top]!=0) swap(nums[top++],nums[bot++]);
        }
    }
};