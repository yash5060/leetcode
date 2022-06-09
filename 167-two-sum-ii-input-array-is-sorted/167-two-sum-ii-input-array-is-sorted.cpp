class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      
      
      int st=0;
      int ed=numbers.size()-1;
      long long sum=0;
      vector<int>ans;
      
      while(st<=ed)
      {
        sum=numbers[st]+numbers[ed];
        
        if(sum<target)
        {
          st++;
        }
        if(sum>target)
        {
          ed--;
        }
        if(sum==target)
        {
          ans.push_back(st+1);
          ans.push_back(ed+1);
          break;
        }
      }
      return ans;  
    }
};