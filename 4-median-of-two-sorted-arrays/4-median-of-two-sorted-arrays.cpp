class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      
      int s1=nums1.size();
      int s2=nums2.size();
      
      // int sz=min(s1,s2);
       vector<int>ans;
      
      int p1=0;
      int p2=0;
      
      if(s1==0){
        ans=nums2;
        
      }
      else if(s2==0)
      {
        ans=nums1;
      }
         
      
     
      else{
      for(int i=0;i<s1+s2;i++)
      {
        if(nums1[p1]<nums2[p2])
        {
          ans.push_back(nums1[p1]);
          p1++;
        }
        else{
          ans.push_back(nums2[p2]);
          p2++;
        }
        
        if(p1==s1||p2==s2)
        {
          break;
        }
      }
      
      for(int i=p1;i<s1;i++)
      {
        ans.push_back(nums1[i]);
      }
      for(int i=p2;i<s2;i++)
      {
        ans.push_back(nums2[i]);
      }
      }
      
      for(int i=0;i<ans.size();i++)
      {
        cout<<ans[i]<<" ";
      }
      float an;
      
      int sz=ans.size();
      
      if(sz%2==0)
      {
        int x=sz/2;
        int p1=ans[x];
        cout<<p1<<endl;
        int p2=ans[(x-1)];
        cout<<p2<<endl;
        int sm=p1+p2;
         an=sm/2.0;
      }
      else{
        an=ans[sz/2];
      }
        return an;
    }
};