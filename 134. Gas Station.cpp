// 用x-y圖去思考
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;
        int lowest = 0; // 哪一個加油站會是最低點
        int num = 0; // 因為不確定目前會不會是最終最低點，所以要先記得目前多低

        for(int i = 0; i < gas.size(); i++){
            total += (gas[i] - cost[i]);
            num += gas[i] - cost[i];
            if(num < 0){
                lowest = i + 1;
                num = 0;
            }
        }
        if(total < 0)  return -1;
        return lowest;
    }
};