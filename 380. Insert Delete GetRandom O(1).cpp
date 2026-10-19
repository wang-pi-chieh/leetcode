// 結合vector + hashtable
// vector 是用來隨機選一個數輸出，用於getRandom
// hashtable 是用來快速插入跟刪除
// hashtable的key放值，value放vector的index
// vector 的內容放值
class RandomizedSet {
public:
    unordered_map<int, int> num;
    vector<int> v;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(!num.count(val)){ // 找不到
            v.push_back(val);
            num[val] = v.size() - 1;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(num.count(val)){ // 找到
            // 修改hashtable: 先修改vector中最後一個元素在hashtable的位置，因為會更動位置
            // 修改 vector: 將最後一個元素放到要刪除元素的位置
            num[v.back()] = num[val];
            v[num[val]] = v.back(); 
            v.pop_back();
            num.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int i = rand() % v.size();
        return v[i];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */