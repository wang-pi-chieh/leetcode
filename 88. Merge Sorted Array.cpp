class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m + n - 1;
        int x1 = m - 1, x2 = n - 1;
        while(x2 >= 0){
            if(x1 >= 0 && nums1[x1] > nums2[x2]){
                nums1[last] = nums1[x1];
                x1--;
            }else{
                nums1[last] = nums2[x2];
                x2--;
            }
            last--;
        }
    }
};