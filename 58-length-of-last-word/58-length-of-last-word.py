class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        
        while (s[-1] == " "):
            s = s[:-1]
        
        cnt = 0
        while ( len(s) > 0 and s[-1] != ' ' ):
            s = s[:-1]
            cnt += 1

        return cnt