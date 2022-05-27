class Solution {
public:
    //sum upto k (x)= k(k+1)/2
    //2x=k^2 + k
    //k = sqrt(2n)
    
    int arrangeCoins(int n) {
        long k = sqrt(2*(long)n);
        long long sum = (k * (k+1) ) >> 1;
        return sum > n ? k-1 : k;
    }
};