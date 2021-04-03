Total = int(input())
top = []
top.append((0, 0, 0, 0))
for i in range(1, Total+1):
    N, W, H = map(int, input().split())
    top.append((i, N, W, H))

Top = sorted(top, key=lambda x: x[3])

dp = [0 for _ in range(Total+1)]

for i in range(1, Total+1):
    for j in range(0, i):
        if Top[i][1] > Top[j][1]:
            dp[i] = max(dp[i], dp[j]+Top[i][2])

Index = dp.index(max(dp))
Max_value = int(max(dp))
result = []
for i in range(Index, 0, -1):
    if Max_value == dp[i]:
        result.append(Top[i][0])
        Max_value = Max_value - Top[i][2]

result.reverse()
print(len(result))
[print(i) for i in result]
