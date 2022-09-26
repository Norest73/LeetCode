class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        
        while (s[-1] == " "):
            s = s[:-1]

        word = s.split(" ")[-1]
        return len(word)