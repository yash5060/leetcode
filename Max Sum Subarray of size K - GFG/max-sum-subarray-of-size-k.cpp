// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        
        if(K>N)
        {
            return 0;
        }
        long long ans;
        long long s1=0;
        
        for(int i=0;i<K;i++)
        {
            s1=s1+Arr[i];
        }
        // cout<<s1<<" ";
        long long mx=s1;
        long long s2=s1;
        
        for(int i=0;i<N-K;i++)
        {
            s2=s2+Arr[i+K]-Arr[i];
            // cout<<s2<<" ";
            mx=max(s2,mx);
        }
        
        return mx;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends