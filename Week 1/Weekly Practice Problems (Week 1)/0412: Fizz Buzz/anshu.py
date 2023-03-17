class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        list = []
        for c in range(1,n+1):
            if c %3 == 0 and c %5 == 0:
                c = "FizzBuzz"
            elif c %5 == 0:
                c = "Buzz"
            elif c %3 == 0:
                c = "Fizz"
            else:
                c =c            
            s = "% s" % c
            list.append(s)
            
        return list 
