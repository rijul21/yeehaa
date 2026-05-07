class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        
        new=set(nums)

        l=0

        for num in new:
            if num-1 not in new:
                length=1

                while num+length in new:
                    length=length+1
            
                l=max(l,length)

        return l
