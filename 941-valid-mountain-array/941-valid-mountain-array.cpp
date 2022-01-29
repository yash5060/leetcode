class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int c1=0;
        int c2=0;
        
        int k=0;
        if(arr.size()>1)
        {
        while(arr[k]<arr[k+1])
        {
            c1++;
            k++;
            if(k==arr.size()-2)
            {
                break;
            }
        }
        
        if(arr[c1]==arr[c1+1])
        {
            return false;
        }
        
        for(int i=c1;i<(arr.size()-1);i++)
        {
              if(arr[i]>arr[i+1])
              {
                  c2++;
              }
            else
            {
                return false;
            }
        }
        
            if(c1 !=0 && c2!=0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else{
            return false;
        }
    }
};