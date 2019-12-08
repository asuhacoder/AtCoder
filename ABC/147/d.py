N = int(input())
A = list(map(int, input().split()))

total = 0
for i in range(N - 1):
    for j in range(i + 1, N):
        total += A[i] ^ A[j]
        # print("A[i] ^ A[j]: ", A[i] ^ A[j])
        # print("total: ", total)

# print(total)
# print(total % 100000007)

canContinue = True
if total - 999999999 - 8 < 0:
    canContinue = False
while canContinue:
    total = total - 999999999 - 8
    if total - 999999999 - 8 < 0:
        canContinue = False
print(total)