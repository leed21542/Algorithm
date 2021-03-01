import sys

N, M = map(int, sys.stdin.readline().split())

tree = list(map(int, sys.stdin.readline().split()))

start = 1
end = max(tree)

while start <= end:
    mid = (start+end)//2

    tree_sum = 0
    for i in tree:
        if i > mid:
            tree_sum += i - mid

    if tree_sum > M:
        start = mid+1
    elif tree_sum < M:
        end = mid-1

print(end)
