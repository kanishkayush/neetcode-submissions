class Solution {
public:
    double myPow(double x, int n) {
        double ans;
         double  m=1;
        if(n==0){
           ans=1;
        }else if(n>0){
            while(n!=0){
                ans*=x;
                n--;
            }
        }else{
            while(n!=0){
                m *=x;
                n++;
                ans=1/m;
            }
        }
        return ans;
    }
};
