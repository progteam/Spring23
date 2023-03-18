def codifier(line, dimension): # Make faster by doing it in one for loop(O(n)) -> less readable
    """Creates sudo matrix and flips it"""
    matrix, line = [], line + (dimension * '*')
    for i in range(dimension):
        matrix.append(line[:dimension])
        line = line[dimension:]
    secret, span = "", 0
    while span < dimension:
        for msg in reversed(matrix):
            if msg[span] != '*':
                secret += msg[span]
        span+=1
    return(secret)

    pass
def smallSqr(length):
    """the smallest square number greater than or equal to Length"""
    n, sqr = 0, 0
    while(sqr < length):
        sqr = n**2
        n = n+1
    return n-1

def main():
    line_num, arr_line = int(input()), []
    [arr_line.append(input()) for i in range(line_num)]

    for msg in arr_line:
        print(codifier(msg, smallSqr(len(msg))))
     
if __name__ == "__main__":
    main()
