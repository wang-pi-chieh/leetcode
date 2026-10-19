class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 2;
        int n = nums.size();
        for(int i = 2; i < n; i++){
            if(nums[i] != nums[k - 2]){
                nums[k++] = nums[i];
            }
        }
        return min(k, n);
    }
};