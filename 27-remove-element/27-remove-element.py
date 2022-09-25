class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:

        cnt = 0
        for i in range(len(nums)):
            if nums[i-cnt] == val:
                del nums[i-cnt]
                cnt += 1
                
        return len(nums)