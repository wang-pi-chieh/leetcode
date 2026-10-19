class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int num = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + num);
        reverse(nums.begin() + num, nums.end());
    }
};