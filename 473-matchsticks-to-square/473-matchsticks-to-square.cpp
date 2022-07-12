class Solution {
public:
    
    
    
    bool solve(int s1,int s2,int s3,int s4,vector<int>&m,int i)
    {   
        if(s1<0 or s2<0 or s3<0 or s4<0)
            return false;
        if(i==m.size())
        {
            if(s1==0 && s2==s1 && s3==0 && s3==0)
                return true;
            return false;
        }
        return solve(s1-m[i],s2,s3,s4,m,i+1)||solve(s1,s2-m[i],s3,s4,m,i+1)|| solve(s1,s2,s3-m[i],s4,m,i+1)||solve(s1,s2,s3,s4-m[i],m,i+1);
    }
    bool makesquare(vector<int>& m) {
        //tle is issue
        
        int sum=0;
        for(auto it:m)
            sum+=it;
        if(sum%4!=0)
            return false;
        if(m.size()<4)
            return false;
        
        int s1=sum/4;
        int s2=s1,s3=s1,s4=s1;
        sort(m.begin(),m.end(),greater<int>());
        if(m[0]>s1)
            return false;
        return solve(s1,s2,s3,s4,m,0);
        
    }
};