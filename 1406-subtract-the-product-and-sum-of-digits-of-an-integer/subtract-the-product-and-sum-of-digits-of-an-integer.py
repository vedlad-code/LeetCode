class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        sum = 0
        prd = 1
        for i in str(n):
            sum += int(i)
            prd *= int(i)

        return prd-sum