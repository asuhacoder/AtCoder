S = input()

even = set({})
odd = set({})
for i in range(len(S)):
    if i % 2 == 0:
        even.add(S[i])
    else:
        odd.add(S[i])
#print(even, odd)

if (not "R" in odd) and (not "L" in even):
    print("Yes")
else:
    print("No")

