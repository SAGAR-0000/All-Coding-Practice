class Solution:
    def digits(self, x):
        cnt = 0
        while x > 0:
            cnt += 1
            x //= 10
        return cnt

    def longestCommonPrefix(self, arr1: List[int], arr2: List[int]) -> int:
        prefixes = set()
        for num in arr1:
            x = num
            while x > 0:
                prefixes.add(x)
                x //= 10

        ans = 0
        for num in arr2:
            x = num
            len_ = self.digits(num)
            while x > 0:
                if x in prefixes:
                    ans = max(ans, len_)
                    break

                x //= 10
                len_ -= 1

        return ans
