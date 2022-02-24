class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int>x;
        
        for(int i=0;i<nums.size();i++)
        {
            x.push_back(nums[i]*nums[i]);
        }
        
        sort(x.begin(), x.end());
        return x;
    }
};