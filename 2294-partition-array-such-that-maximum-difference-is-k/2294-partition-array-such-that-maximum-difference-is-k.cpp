class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        
        vector<vector<int>>ans;
        vector<int>tmp;
        tmp.push_back(nums[0]);
        
        for(int i=1;i<nums.size();i++)
        {
            int dif=nums[i]-tmp[0];
            
            if(dif<=k)
                tmp.push_back(nums[i]);
            
            else{
                ans.push_back(tmp);
                
                tmp.clear();
                tmp.push_back(nums[i]);
                
            }
                
        }
        // if(tmp.size()!=0)
            return ans.size()+1;
        // return ans.size();
        
    }
};