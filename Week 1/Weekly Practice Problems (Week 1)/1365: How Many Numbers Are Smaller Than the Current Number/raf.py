        arr = []
        for num in nums:
            sum = 0
            for n in nums:
                if num > n: sum += 1
            arr.append(sum)
        return arr
