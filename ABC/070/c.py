N = int(input())

time_array = []
for i in range(N):
    time_array.append(int(input()))
#print(time_array)

base_num = max(time_array)

canContinue = True
ans = 0
while canContinue:
    ans += base_num
    canContinue = False
    for time in time_array:
        if ans % time == 0:
            pass
        else:
            canContinue = True
            break

print(ans)
