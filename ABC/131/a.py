S = input()

evalation = "Good"
for i in range(len(S)):
    try:
        if S[i] == S[i + 1]:
            evalation = "Bad"
    except:
        pass

print(evalation)
