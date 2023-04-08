n = int(input())
temps = list(map(int, input().split()))

def start(n, temps):
    best_day = 0
    max_temp = max(temps[0], temps[2])

    for i in range(1, n-2):
        current_max = max(temps[i], temps[i+2])

        if current_max < max_temp:
            max_temp = current_max
            best_day = i

    return best_day + 1, max_temp

best_day, max_temp = start(n, temps)
print(str(best_day) + " " + str(max_temp))
