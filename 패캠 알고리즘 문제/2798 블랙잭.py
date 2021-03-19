import sys
sys.setrecursionlimit(10**6)
N, M = map(int, input().split())
card = list(map(int, input().split()))
Result = 0

Sum = 0
for i in range(N):
    for j in range(N):
        if i == j:
            continue
        for z in range(N):
            if i == z or j == z:
                continue
            Sum = card[i] + card[j] + card[z]
            if Sum <= M:
                if Result < Sum:
                    Result = Sum

print(Result)
