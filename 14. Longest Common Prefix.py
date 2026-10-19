class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        n1, n2 = min(strs), max(strs)
        for i, ch in enumerate(n1): # n1 != n2
            if ch != n2[i]:
                return n1[:i]
        return n1 # n1 == n2 ，像是strs = ""或是 strs = "a"
        