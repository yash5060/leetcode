class Solution {
public:
    double trimMean(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        
        int sz=arr.size();
        
        int x=(5*sz)/100;
        
        for(int i=0;i<x;i++)
        {
            arr[i]=0;
        }
        
        for(int i=sz-1;i>=sz-x;i--)
        {
            arr[i]=0;
        }
        double sum=0;
        for(int i=0;i<sz;i++)
        {
            sum=sum+arr[i];
            
        }
        double ans=sum/(sz-(2*x));
        return ans;
        
    }
};