s1,s2 = map(int, input().split())
m1,m2 = map(int, input().split())



year = 1
while True:
    sun_align = (s1 + year) % s2 == 0
    moon_align = (m1 + year) % m2 == 0
    if sun_align and moon_align:
        print(year)
        break
    year += 1
