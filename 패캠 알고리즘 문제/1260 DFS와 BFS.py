from collections import deque
N, M, V = map(int, input().split())
box = [[] for _ in range(N+1)]

for _ in range(M):
    a, b = map(int, input().split())
    box[a].append(b)
    box[b].append(a)

for e in box:
    e.sort()


def DFS(start_vertex):
    visited[start_vertex] = True
    print(start_vertex, end=' ')
    for i in range(len(box[start_vertex])):
        V = box[start_vertex][i]
        if not visited[V]:
            visited[V]
            DFS(V)


def BFS(start_vertex):
    visited[start_vertex] = True
    queue = deque([start_vertex])
    print(start_vertex, end=' ')
    while(queue):
        V = queue.popleft()
        for i in range(len(box[V])):
            if not visited[box[V][i]]:
                visited[box[V][i]] = True
                print(box[V][i], end=' ')
                queue.append(box[V][i])


visited = [False]*(N+1)
DFS(V)
print()
visited = [False]*(N+1)
BFS(V)
