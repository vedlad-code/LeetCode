class Solution:
    def reverseString(self, s: list[str]) -> None:
        o = []
        s.reverse()
        for i in s:
            o.append(i)
        return o
        