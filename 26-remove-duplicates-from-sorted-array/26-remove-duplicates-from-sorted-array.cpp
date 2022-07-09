class Solution {
public:
    int removeDuplicates(vector<int>& ans) {
      
      sort( ans.begin(), ans.end() );
      ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
      
      return ans.size();
        
    }
};