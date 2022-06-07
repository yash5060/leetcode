
class Solution {   
public:
    
    int solve (vector<int> &nums,int index,vector<int>&dp1)
    {
        
        if(index>=nums.size())
        {
            return 0;
        }
        if(dp1[index]!=-1)
        {
            return dp1[index];
        }
        int ch=nums[index]+solve(nums,index+2,dp1);
        int dch=solve(nums,index+1,dp1);
        
        return dp1[index]= max(ch,dch);
        
        
    }
    
     int solve2 (vector<int> &nums,int index,vector<int>&dp2)
    {
        
        if(index<0)
        {
            return 0;
        }
         if(dp2[index]!=-1)
        {
            return dp2[index];
        }
        int ch=nums[index]+solve2(nums,index-2,dp2);
        int dch=solve2(nums,index-1,dp2);
        
        return dp2[index]= max(ch,dch);
        
        
    }
    int rob(vector<int>& nums) {
        
        if(nums.size()==1)
        {
            return nums[0];
        }
        vector<int>dp1(nums.size(),-1);
        vector<int>dp2(nums.size(),-1);
        int a= solve(nums,1,dp1);
        int b=solve2(nums,nums.size()-2,dp2);
        // return b;
        
        
        return(max(a,b));
        
    }
    
    
};