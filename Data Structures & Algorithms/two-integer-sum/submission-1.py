from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap={}

        for i,num in enumerate(nums):
            temp=target-num

            if temp in hashmap:
                return [hashmap[temp],i]

            hashmap[num]=i;


