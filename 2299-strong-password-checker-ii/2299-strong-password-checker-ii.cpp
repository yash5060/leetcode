class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        
      int n=password.size();
      
      int c1=0,c2=0,c3=0,c4=0,c5=0;
      
      for(int i=0;i<n;i++)
      {
        int x=password[i];
        
        if(x>=97 && x<=122)
        {
          c1=1;
        }
        else if(x>=65 &&x<=90)
        {
          c2=1;
        }
        else if(x>=48 &&x<=57)
        {
          c3=1;
        }
        else if(x>=33 && x<=45)
        {
          if(x==34 ||x==39 ||x==44)
          {
            c4=0;
          }
          else{
            c4=1;
          }
          
        }
        else if(x==94||x==64)
        {
          c4=1;
        }
      }
      int check=-1;
      for(int i=0;i<n-1;i++)
      {
        if(password[i]==password[i+1])
        {
          check=0;
          break;
        }
      }
      if(check==-1)
      {
        c5=1;
      }
      cout<<c1 <<c2<<c3<<c4<<c5;
      if(c1==1&& c2==1 && c3==1 && c4==1 && c5==1&&n>=8)
      {
        return true;
      }
      return false;
    }
};