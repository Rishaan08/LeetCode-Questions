#20. Valid Parentheses

class Solution:
    def isValid(self, s: str) -> bool:
        res = []
        closeToOpen = {")":"(", "]":"[", "}":"{"}
        for i in s:
            if i in closeToOpen:
                if(res and res[-1]==closeToOpen[i]):
                    res.pop()
                else:
                    return False
            else:
                res.append(i)

        return not res
