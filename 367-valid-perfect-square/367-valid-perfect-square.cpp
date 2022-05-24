class Solution {
public:
    //Solution is check square of low to high where mid is equal to num
    //where low start with 1 and high start with 100000 ( 2^31 <= sqrt(100000))
    bool isPerfectSquare(int num) {
        long int low=0,high=100000;
        while(low<=high)
        {
            long int mid = (low + high) >> 1;
            long int sqrv = mid * mid;
            if(sqrv == num)
                return true;
            else if(sqrv < num)
            {
                low= mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return false;
    }
};