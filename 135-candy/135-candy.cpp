class Solution {
public:
    int candy(vector<int>& ratings) {
      
      vector<int>an(ratings.size(),1);
      
      for(int i=0;i<ratings.size()-1;i++)
      {
        if(ratings[i+1]>ratings[i])
        {
          an[i+1]=an[i]+1;
        }
      }
      
      for(int i=ratings.size()-1;i>0;i--)
      {
        if(ratings[i-1]>ratings[i])
        {
          if(an[i-1]<=an[i])
          {
            an[i-1]=an[i]+1;
          }
        }
      }     
      int sum=0;
      for(int i=0;i<an.size();i++)
        sum=sum+an[i];
      
      return sum;
    }
};