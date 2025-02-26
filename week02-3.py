# leetcode 1. Two Sum
#���@��Ʀr nums�̭�����Ӭۥ[�Otarget
#nums[i]+nums[j] == target ���i��j�ۥ[�Otarget
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box = {}

        for i, num in enumerate(nums):
            other = target - num
            if target-num in box:
                    return[box[other],i]
            else:
                box[num] = i
