from collections import deque
n, m = map(int, input().split())
island = [[] for _ in range(n + 1)]
start = 1000000000
end = 1


def bfs(weight):
    queue = deque([start_node])
    visited = [False]*(n+1)
    visited[start_node] = True
    while queue:
        x = queue.popleft()
        for next_node, W in island[x]:
            if not visited[next_node] and W >= weight:
                visited[next_node] = True
                queue.append(x)
    return visited[end_node]


for _ in range(m):
    a, b, c = map(int, input().split())
    island[a].append((b, c))
    island[b].append((a, c))
    start = min(start, c)
    end = max(end, c)

start_node, end_node = map(int, input().split())


result = start
while start <= end:
    mid = (start+end)//2
    if bfs(mid):
        result = mid
        start = mid+1
    else:
        end = mid-1

print(result)
