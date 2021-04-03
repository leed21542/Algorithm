L1 = list(input())
L2 = list(input())
L1.insert(0,0)
L2.insert(0,0)
box = [[0]*len(L2) for _ in range(len(L1))]

for i in range(1,len(L1)):
    for j in range(1,len(L2)):
        if L1[i] == L2[j]:
            box[i][j] = box[i-1][j-1]+1
        else:
            box[i][j] = max(box[i-1][j],box[i][j-1])

print(box[len(L1)-1][len(L2)-1])
