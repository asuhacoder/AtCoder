N = int(input())

H = list(map(int, input().split()))

# print(N, H)

counter = 0
answer = []
for i in range(N):
    try:
        if H[i] >= H[i + 1]:
            counter += 1
        else:
            answer.append(counter)
            counter = 0
    except:
        pass
answer.append(counter)

print(max(answer))