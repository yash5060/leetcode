class NumMatrix {
     
public:
    vector<vector<int> >an ;
    NumMatrix(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        
       an= vector<vector<int> > ( m+1 , vector<int> (n+1));
        
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                an[i][j]=an[i][j-1]+an[i-1][j]+matrix[i-1][j-1]-an[i-1][j-1];
            }
        }
        // cout<<an[2][2];
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        
        return an[row2+1][col2+1]-an[row1][col2+1]-an[row2+1][col1]+an[row1][col1];
        
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */