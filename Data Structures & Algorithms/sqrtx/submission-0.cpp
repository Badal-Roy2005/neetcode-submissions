class Solution {
public:
    int mySqrt(int x) {
        

        int low = 0 ;
        int right = x;

        while(low <= right){
            long long int mid = low + (right - low)  /  2;

            if(mid * mid == x){
                 return mid;
            }
            else if(mid * mid < x){
                low = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        return right;
    }
};