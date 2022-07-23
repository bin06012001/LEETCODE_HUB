class Solution(object):
    def countSmaller(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        tmp = []
        ans = []
        for i in nums[::-1]:
            x = bisect.bisect_left(tmp, i)
            ans.append(x)
            tmp.insert(x, i)
        
        return ans[::-1]
        