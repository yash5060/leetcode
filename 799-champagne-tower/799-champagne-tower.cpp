class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        
        double ans[110][110]={0.0};
        ans[0][0]=poured;
        for(int i=0;i<105;i++)
        {
            for(int j=0;j<=105;j++)
            {
                if(ans[i][j]>=1)
                {
                double rem=ans[i][j]-1.0;
                ans[i+1][j]+=rem/2.0;
                ans[i+1][j+1]+=rem/2.0;
                ans[i][j]=1;
                }
                
            }
        }
       
        return ans[query_row][query_glass];
    }
};