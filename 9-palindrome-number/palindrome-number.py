class Solution:
    def isPalindrome(self, x: int) -> bool:
        x = str(x)
        if x == x[::-1]: return True
        else: return False
        # y = ""
        # for i in range(len(x)-1, -1, -1):
        #     y += x[i]

        # if y == x:
        #     return True
        # else:
        #     return False