class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<array<int, 2>> num(prices.size() + 1);
        num[0][1] = INT_MIN;
        for(int i = 1; i <= prices.size(); i++){
            num[i][0] = max(num[i -1][1] + prices[i - 1], num[i - 1][0]);
            num[i][1] = max(num[i - 1][1], num[i - 1][0] - prices[i - 1]);
        }
        return num[prices.size()][0];

    }
};