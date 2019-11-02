array = list(map(int, input().split()))
A = array[0]
B = array[1]
C = array[2]
D = array[3]

if A >= C:
    start = A
else:
    start = C

if B >= D:
    end = D
else:
    end = B

ans = end - start

if ans < 0:
    print(0)
else:
    print(ans)

