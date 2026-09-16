class Solution:
    def findWords(self, words: list[str]) -> list[str]:
        row1 = set("qwertyuiop")
        row2 = set("asdfghjkl")
        row3 = set("zxcvbnm")
        result = []
        for word in words:
            lower = set(word.lower())
            if lower <= row1 or lower <= row2 or lower <= row3:
                result.append(word)
        return result