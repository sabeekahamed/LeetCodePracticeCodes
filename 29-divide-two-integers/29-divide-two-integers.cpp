class Solution {
   
public:
    int divide(int dividend, int divisor) 
    {
        if (dividend == INT_MIN and divisor == -1)
            return INT_MAX;
 
        long long num = abs(dividend), denm = abs(divisor), ans = 0;
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        while (num >= denm)
        {
            long long temp = denm, m = 1;
            while (temp << 1 <= num)
            {
                temp <<= 1;
                m <<= 1;
            }
 
            num -= temp;
            ans += m;
        }
        return sign * ans;
        /*
        if(dividend == 1<<31 && divisor == -1)     return INT_MAX;
        if(divisor == 1)    
            return dividend;
        
        bool sign = (dividend > 0) == (divisor > 0);
        int quotient = 0;
        int t_dividend = abs(dividend);
        int t_divisor = abs(divisor);
        cout<<"divi:"<<t_dividend;
        while( t_dividend >= t_divisor)
        {
            t_dividend -= t_divisor;
            quotient++;
        }
        return sign ? quotient : -quotient;*/
    }
};