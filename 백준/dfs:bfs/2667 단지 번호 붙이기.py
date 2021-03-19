Total = int(input())

box = []
result = [0 for i in range(1000)]
Num = 2


def cal(x, y):
    global Num, Total
    global box, result
    if x < 0 or y < 0 or x >= Total or y >= Total or box[x][y] != 1:
        return
    if box[x][y] == 1:
        box[x][y] = Num
        result[Num] += 1

    cal(x-1, y)  # 상
    cal(x+1, y)  # 하
    cal(x, y-1)  # 좌
    cal(x, y+1)  # 우


for i in range(Total):
    li = list(map(int, input()))
    box.append(li)

for i in range(Total):
    for j in range(Total):
        if box[i][j] == 1:
            cal(i, j)
            Num += 1

result.sort()
print(Num-2)
for i in range(1000):
    if result[i] != 0:
        print(result[i])
