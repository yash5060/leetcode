class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int>x;
        
        int j=nums.size()-1;
        
        if(k>nums.size())
        {
            k=k%nums.size();
        }
        
        for(int i=0;i<k;i++)
        {
            x.push_back(nums[j]);
            j--;
            nums.pop_back();
        }
        
        reverse(x.begin(), x.end());
        
        for(int z=0;z<nums.size();z++)
        {
            x.push_back(nums[z]);
        }
        
        nums.clear();
        
        for(int i=0;i<x.size();i++)
        {
            nums.push_back(x[i]);
        }
    }
};