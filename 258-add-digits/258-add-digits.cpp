class Solution {
public:
    int addDigits(int num) {
        
        
    if(num>9)
{

    while(num>9)
    {
    int sum=0;
    int div;
    while(num!=0)
    {
        div=num%10;
        sum=sum+div;
        num=num/10;
    }
    
    
    num=sum;
    }

    return num;
}


else{
    return num;
}

}
};