class Solution:
    def isPalindrome(self, s: str) -> bool:
        clean = "".join(i for i in s if i.isalnum())
        clean = clean.lower()
        return clean == clean[::-1]