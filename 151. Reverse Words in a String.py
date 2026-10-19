class Solution:
    def reverseWords(self, s: str) -> str:
        temp = "";
        r = [];
        for i in range(0, len(s), 1):
            if(i == len(s) - 1) and s[i] != " ":
                temp += s[i]
                r.append(temp)

            if s[i] == " ":
                if temp != "":
                    r.append(temp)
                    temp = ""
            else:
                temp += s[i]


        r.reverse();
        temp = " ".join(r)
        return temp