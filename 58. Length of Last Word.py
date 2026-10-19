class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        l = 0;
        for i in range(len(s) - 1, -1, -1):
            if s[i] == " " and l == 0: 
                continue
            elif s[i] == " ": 
                return l
            else: 
                l += 1
        return l