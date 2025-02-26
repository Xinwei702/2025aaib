# leetcode 1. Two Sum
#有一堆數字 nums裡面哪兩個相加是target
#nums[i]+nums[j] == target 找到i跟j相加是target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box = {}

        for i, num in enumerate(nums):
            other = target - num
            if target-num in box:
                    return[box[other],i]
            else:
                box[num] = i
