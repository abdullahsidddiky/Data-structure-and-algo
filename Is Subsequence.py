class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if(len(s)<=0):
            return True
        count = 0
        for i in range(len(t)):
            if(count < len(s) and s[count]==t[i]):
                count+=1
        if(count == len(s)):
            return True
        else:
            return False