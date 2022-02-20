int digit(int n)
    
{
    int sum=0;
    int l;
    while(n>0)
    {
        l=n%10;
        n=n/10;
        sum=sum+l;
    }
    return sum;
}

class Solution {
public:
    int countEven(int num) {
        
        int count=0;
        int x;
        
        for(int i=1;i<=num;i++)
        {
            x= digit(i);
            if(x%2==0)
            {
                count++;
            }
        }
        return count;
    }
};

