class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        
        n_dict = {}
        for n in nums:    
            if n in n_dict:
                n_dict[n] += 1
            else:
                n_dict[n] = 1
                
        for n in n_dict:
            if n_dict[n] == 1:
                return n