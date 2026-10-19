class Solution {
public:
    int candy(vector<int>& ratings) {
        int ans = 0;
        int len = ratings.size();
        vector<int> c(len, 1);
        for(int i = 1; i < len; i++){ // l -> r
            if(ratings[i] > ratings[i - 1]) c[i] = c[i - 1] + 1; // 自己有沒有比左邊的還大
        }

        for(int i = len - 2; i >= 0; i--){ // r -> l
            if(ratings[i] > ratings[i + 1]) c[i] = max(c[i + 1] + 1, c[i]); // 自己有沒有比右邊的還大
        }

        for(int i = 0; i < len; i++){
            ans += c[i];
        }
        return ans;
    }
};