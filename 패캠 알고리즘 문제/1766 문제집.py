import heapq

N, M = map(int, input().split())

array = [[]for _ in range(N+1)]
indegree = [0] * (N+1)

heap = []
result = []

for _ in range(M):
    a, b = map(int, input().split())
    array[a].append(b)
    indegree[b] += 1

for i in range(1, N+1):
    if indegree[i] == 0:
        heapq.heappush(heap, i)

while heap:
    data = heapq.heappop(heap)
    result.append(data)
    for y in array[data]:
        indegree[y] -= 1
        if indegree[y] == 0:
            heapq.heappush(heap, y)

for i in result:
    print(i, end=' ')
