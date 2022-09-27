class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        
        sum = 0
        for d in digits:
            sum = sum*10 + d
        
        sum += 1
        
        res = []
        for s in str(sum):
            res.append(int(s))
            
        return res
        