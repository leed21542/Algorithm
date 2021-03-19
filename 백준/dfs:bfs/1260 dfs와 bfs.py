Total = int(input())
line = int(input())
Result = 0

box = [[0]*(Total+1) for i in range(Total+1)]

for i in range(line):
    a, b = map(int, input().split())
    box[a][b] = box[b][a] = 1
visit = [0]*(Total+1)


def dfs(v):
    global Result
    visit[v] = 1
    Result += 1
    for i in range(1, Total+1):
        if visit[i] == 0 and box[v][i] == 1:
            dfs(i)


dfs(1)
print(Result-1)
