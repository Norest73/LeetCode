class Solution:
    def climbStairs(self, n):
        
        if n <= 2:
            return n
        
        cnt = 2
        res = [1, 1, 2]
        while cnt < n:
            cnt += 1
            res[0], res[1] = res[1], res[2]
            res[2] = res[0] + res[1]
            
        return res[2]