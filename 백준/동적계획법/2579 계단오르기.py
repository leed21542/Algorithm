import sys
sys.setrecursionlimit(100000)

N = int(input())
In = []

box = [[0 for _ in range(N+1)]for _ in range(2)]
for _ in range(N):
    In.append(int(input()))

box[0][0] = 0
box[1][0] = 0
box[0][1] = In[0]
box[1][1] = 0
for i in range(2, N+1):
    if i < 3:
        box[0][i] = max(box[0][i-1], box[1][i-1]) + In[i-1]
        box[1][i] = max(box[0][i-2], box[1][i-2]) + In[i-1]
    else:
        box[0][i] = box[1][i-1] + In[i-1]
        box[1][i] = max(box[0][i-2], box[1][i-2]) + In[i-1]

print(max(box[0][N], box[1][N]))
