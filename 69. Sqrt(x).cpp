class Solution {
    const int SQRT_INT_MAX=sqrt(INT_MAX);
public:
    int mySqrt(int x) {
        int mid;
        int l = 0, r =min(x, SQRT_INT_MAX);
        int ans = 0;
        while(l <= r){
            mid = (l + r) / 2;
            if(mid * mid == x){
                ans = mid;
                break;
            }else if(mid * mid > x){
                r = mid - 1;
            }else {
                ans = mid;
                l = mid + 1;
            }
        }
        return ans;
    }
};