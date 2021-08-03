//https://leetcode.com/problems/powx-n/
class Solution {
public:
    
    double calcPow(double x, long long n)
    {
        if(n == 0)
        {
            return 1;
        }
        
        double res = calcPow(x, n/2);
        
        if(n%2)
        {
            return (res * res * x);
        }
        else
            return res * res;
    }
    
    double myPow(double x, int n) {
        
        long long nn = n;
        if(nn < 0)
            nn = nn * -1;
        double res = calcPow(x, nn);
        
        if(n<0)
        {
            return 1/res;
        }
        return res;
        
    }
};
