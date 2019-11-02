N = int(input())
a_array = []

for i in range(N):
    a_array.append(int(input()))

paper = set([])

for i in a_array:
    if i in paper:
        paper.remove(i)
    else:
        paper.add(i)

print(len(paper))
