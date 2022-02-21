const int n=1e7;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    
    int ans;
    unordered_map<int,int>mp;
    for(auto it:nums)
    {
        mp[it]++;
    }
    vector<int>fq;
    vector<int>no;    
    
    int i=0;
    for(auto x:mp)
    {
        no.push_back(x.first);
        fq.push_back(x.second);
        
    }
        
    for(int j=0;j<fq.size();j++)
    {
        if(fq[j]>nums.size()/2)
        {
             ans=no[j];
            break;
        }
    }
        
      return ans;  
    }
};