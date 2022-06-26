class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
      
      
      int s1=0;
      int sz=cardPoints.size();
      int j=sz-1;
      
      for(int i=0;i<k;i++)
      {
        s1=s1+cardPoints[j];
        j--;
      }
      j++;
      int s2=s1;
      int mx=s1;
      
      for(int i=0;i<k;i++)
      {
        s2=s2+cardPoints[i]-cardPoints[j];
        j++;
        mx=max(mx,s2);
      }
      return mx;
        
    }
};