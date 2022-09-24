class Solution:
    def isValid(self, s: str) -> bool:
        
        stack = []
        bcs = {'(': ')', '{': '}', '[': ']'}
        
        for c in s:
            if c in bcs.keys():
                stack.append(c)
            else:
                if not stack:
                    return False
                
                elif bcs[stack.pop()] == c:
                    pass
                
                else:
                    return False
        
        return True if not stack else False