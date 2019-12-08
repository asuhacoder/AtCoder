S = input()
counter = 0

for i in range(len(S) // 2):
    # print(S[i], S[-1 * (i + 1)])
    if S[i] != S[-1 * (i + 1)]:
        counter += 1

print(counter)