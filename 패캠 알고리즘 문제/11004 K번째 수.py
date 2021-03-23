N, K = map(int, input().split())
L = list(map(int, input().split()))
L.sort()
print(L[K-1])
