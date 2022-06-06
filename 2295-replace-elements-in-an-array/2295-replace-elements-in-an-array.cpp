class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        
        for(int i=0;i<operations.size();i++)
        {
            int k=mp[operations[i][0]];
            
            // int a=mp[k];
            nums[k]=operations[i][1];
            mp.erase(operations[i][0]);
            mp[operations[i][1]]=k;
            
        }
        return nums;
    }
};