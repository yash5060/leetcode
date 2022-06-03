class NumArray {
public:
    vector<int>ans;
    NumArray(vector<int>& nums) {
        
        ans=vector<int>(nums.size()+1);
        long long sum=0;
        
        for(int i=1;i<=nums.size();i++)
        {
            sum=sum+nums[i-1];
            ans[i]=sum;
        }
        
    }
    
    int sumRange(int left, int right) {
        
        return ans[right+1]-ans[left];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */