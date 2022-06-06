class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
         int x = 100000;
        
        vector<int>ans(x,0);
        vector<int>an;
        
        for(int i=0;i<nums.size();i++)
        {
            ans[nums[i]]=1;
        }
        
        for(int i=1;i<=nums.size();i++)
        {
            if(ans[i]==0)
            {
                an.push_back(i);
            }
        }
       return an; 
    }
};