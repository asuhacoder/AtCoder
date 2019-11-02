N = int(input())

array = list(map(int, input().split()))

#print(N, array)

ans_array = [array[0]]
for i in range(N - 1):
    #print("i: ", i)
    #print(ans_array)
    if i == N - 2:
        ans_array.append(array[-1])
    else:
        ans_array.append(min([array[i], array[i + 1]]))
print(sum(ans_array))

