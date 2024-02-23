class Solution {
public:
    int reverse(int x) {
       bool is_negative=false;
       if(x<0)
       {
           is_negative=true;
           x=abs(x);
       }
       long result=0;
       while(x>0)
       {
           result=(result*10)+(x%10);
           x=x/10;
       }
       if(result>INT_MAX || result<INT_MIN){
            return 0;
        }
       if(is_negative)
       {return result*-1;}
       return int(result);

    }
};