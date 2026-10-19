class Solution {
public:
    string intToRoman(int num) {
        string r[4][10] = {
            {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"}, // 个位
            {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"}, // 十位
            {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}, // 百位
            {"", "M", "MM", "MMM"}, // 千位
        };

        return r[3][num / 1000] + r[2][(num % 1000) / 100] + r[1][(num % 100) / 10] + r[0][num % 10];



        
    }
};