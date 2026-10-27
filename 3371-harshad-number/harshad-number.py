class Solution:
    def sumOfTheDigitsOfHarshadNumber(self, x: int) -> int:
        total = 0
        a = x
        while a > 0:
            total += a % 10
            a //= 10
        return total if x % total == 0 else -1