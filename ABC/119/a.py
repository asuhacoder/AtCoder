y, m, d = map(int, input().split("/"))

isHeisei = False
if y <= 2019:
    if m <= 4:
        if d <= 30:
            isHeisei = True
print(["TBD", "Heisei"][isHeisei])
