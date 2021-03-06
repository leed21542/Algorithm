N = int(input())

num = [0 for _ in range(91)]
num[0] = 1
num[1] = 1
if N > 1:
    for i in range(2, N):
        num[i] = num[i-1] + num[i-2]
print(num[N-1])
