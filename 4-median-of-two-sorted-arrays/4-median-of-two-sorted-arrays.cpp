class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int s1=nums1.size();
        int s2=nums2.size();
        
        vector<int>x (s1+s2);
        int i=0;
        
        for( i=0;i<s1;i++)
        {
            x[i]=nums1[i];
        }
        
        for(int j=0;j<s2;j++)
        {
            x[i]=nums2[j];
            i++;
        }
        
        sort(x.begin(),x.end());
        
        double med;
        
        if(x.size()%2==0)
        {
            int m=x.size();
            double f1=x[m/2];
            double f2=x[(m/2)-1];
            med=(f1+f2)/2;
        }
        
        else if(x.size()%2!=0)
        {
            med=x[x.size()/2];
        }
        
        return med;
        
    }
};