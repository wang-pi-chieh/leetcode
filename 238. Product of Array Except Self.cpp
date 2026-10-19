class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size(), 1);
        vector<int> pre(nums.size(), 1);
        vector<int> suf(nums.size(), 1);
        pre[0] = nums[0];
        for(int i = 1; i < nums.size(); i++){
            pre[i] = pre[i - 1] * nums[i];
        }

        suf[nums.size() - 1] = nums[nums.size() - 1];
        for(int i = nums.size() - 2; i >=0; i--){
            suf[i] = suf[i + 1] * nums[i];
        }

        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                answer[i] = 1 * suf[i + 1];
            }else if(i == nums.size() - 1){
                answer[i] = pre[i - 1] * 1;
            }else{
                answer[i] = pre[i - 1] * suf[i + 1];
            }
        }
        return answer;
    }
};