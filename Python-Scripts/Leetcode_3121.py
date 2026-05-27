class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        lastLower = [-1] * 26
        firstUpper = [-1] * 26
        for i, ch in enumerate(word):
            if ch.islower():
                lastLower[ord(ch) - ord('a')] = i
            else:
                idx = ord(ch) - ord('A')
                if firstUpper[idx] == -1:
                    firstUpper[idx] = i
        ans = 0
        for i in range(26):
            if (lastLower[i] != -1 and firstUpper[i] != -1 and lastLower[i] < firstUpper[i]):
                ans += 1

        return ans
