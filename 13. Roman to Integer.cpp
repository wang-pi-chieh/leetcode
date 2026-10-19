class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> table(7);
        table['I'] = 1;
        table['V'] = 5;
        table['X'] = 10;
        table['L'] = 50;
        table['C'] = 100;
        table['D'] = 500;
        table['M'] = 1000;

        int ans = table[s[0]];
        
        for(int i = 1; i < s.length(); i++){
            if(table[s[i]] > table[s[i - 1]]){
                ans = ans - (2 * table[s[i - 1]]) + table[s[i]];
            }
            else ans += table[s[i]];
        }
        return ans;
    }
};