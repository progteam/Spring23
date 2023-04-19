class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        a = []
        for i in range(1, n+1):
            if i % 3 != 0 and i % 5 != 0:
                a.append(str(i))
            else:
                if i % 3 == 0 and i % 5 == 0:
                    a.append("FizzBuzz")
                    continue
                elif i % 3 == 0:
                    a.append("Fizz")
                    continue
                elif i % 5 == 0:
                    a.append("Buzz")
                    continue
        return a
