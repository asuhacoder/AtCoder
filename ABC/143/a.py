A, B = map(int, input().split())

uncovered_space = A - 2 * B

if uncovered_space > 0:
    print(uncovered_space)
else:
    print(0)