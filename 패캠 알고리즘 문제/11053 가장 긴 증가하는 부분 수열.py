Total = int(input())
L = list(map(int,input().split()))

box = [[1]*Total for _ in range(Total)]

for i in range(1,Total):
    for j in range(Total):
        box[i][j] = box[i-1][j]
    
    for j in range(0,i):
        if L[i] > L[j]:
            box[i][i] = max(box[i][j]+1,box[i][i])


print(max(box[Total-1]))