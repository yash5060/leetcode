class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int,int>mp;

    for(auto it:nums)
    {
        mp[it]++;
    }
    for(auto x:mp)
    {
        
        if(x.second>1)
        {
            return true;
        }   
    }
        return false;
    }
};