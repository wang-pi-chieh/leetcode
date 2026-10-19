// 如果用往前搬的方式，連續兩個位置均與val相同時，會發生錯誤
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int k = 0;
       for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                nums[k]=nums[i];
                k++;
            }
       }
       return k;
    }
};