class Solution:
    def characterReplacement(self, s: str, k: int) -> int:

        left=0
        maxf=0
        mapp={}
        long=0

        for right in range(len(s)):
            mapp[s[right]]=1+mapp.get(s[right],0)
            maxf=max(maxf,mapp[s[right]])

            while(right-left+1)-maxf>k:
                mapp[s[left]]=mapp[s[left]]-1
                left=left+1

            long=max(long,right-left+1)
        

        return long


        