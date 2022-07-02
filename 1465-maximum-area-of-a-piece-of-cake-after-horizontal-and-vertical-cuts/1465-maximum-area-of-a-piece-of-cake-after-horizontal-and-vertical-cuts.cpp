class Solution {
public:
    long long mod=1e9+7;
    int maxArea(int k, int w, vector<int>& h, vector<int>& v) {
        sort(v.begin(),v.end());
        sort(h.begin(),h.end());
        int df2=v[0]-0;
        int diff=h[0]-0;
        for(int i=1;i<h.size();i++)
        {
            diff=max(diff,h[i]-h[i-1]);
        }
        diff=max(diff,k-h.back());
        for(int i=1;i<v.size();i++)
        {
            df2=max(df2,v[i]-v[i-1]);
        }
        df2=max(df2,w-v.back());
        long long ans= (diff%mod * df2%mod)%mod;
        return (int)ans;
    }
};