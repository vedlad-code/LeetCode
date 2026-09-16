class Solution:
    def fizzBuzz(self, n: int) -> list[str]:
        ans = []
        for i in range(1, n+1):
            ans.append(str(i))
            if i % 3 == 0 and i % 5 == 0:
                ans[i-1] = "FizzBuzz"
            elif i % 3 == 0:
                ans[i-1] = "Fizz"
            elif i % 5 == 0:
                ans[i-1] = "Buzz"
        return ans
