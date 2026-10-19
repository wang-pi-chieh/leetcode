// 找最大的 h，使得至少有 h 篇論文的引用次數 ≥ h。
// 當引用次數大於發表論文之篇數時，即可認定等於發表論文之篇數
class Solution {
public:
    int hIndex(vector<int>& citations) {
        vector<int> count(citations.size() + 1); //算出被引用n次的論文有幾篇
        int n = citations.size();
        for(int i = 0; i < citations.size(); i++){
            count[min(citations[i], n)]++;
        }
        
        int ans = 0; // 引用次數
        int i;
        for(i = n; i >= 0;i--){
            ans += count[i];  // 
            if(ans >= i) break; // 次數大於等於引用次數
        }
        return i;
    }
};