// reverse只能用在string、vector、array
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int r = 0;

        if(x != 0 && x % 10 == 0) return false;

        while(x > r){
            r = r * 10 + x % 10;
            x /= 10;
        }
        if(r == x || x == r / 10) return true;
        return false;
    }
};