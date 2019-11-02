N = int(input())

food_array = []
for i in range(3):
    food_array.append(list(map(int, input().split())))
#print(food_array)

A = food_array[0]
B = food_array[1]
C = food_array[2]

index = -1
count = 0
for i in A:
    count += B[i - 1]
    #print(index, i)
    if index + 1 == i:
        count += C[index - 1]
    index = i
print(count)

