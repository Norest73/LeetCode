class Solution:
    def removeDuplicates(self, nums):
        
        if len(nums) == 1:
            return 1
        
        cnt = 0
        for i in range(1, len(nums)):
            if nums[i-1] == nums[i]:
                cnt += 1
            else:
                nums[i-cnt] = nums[i]
                
        return len(nums) - cnt