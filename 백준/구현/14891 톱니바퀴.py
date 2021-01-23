Round = []
spin = [0 for i in range(4)]

Round.append(list(map(int, input())))
Round.append(list(map(int, input())))
Round.append(list(map(int, input())))
Round.append(list(map(int, input())))


def cal(num, D):
    if num < 0 or num > 3:
        return
    if D == 1:  # 시계방향 회전
        change_num2 = Round[num][2]
        change_num6 = Round[num][6]
        NN = Round[num][-1]
        Round[num].pop()
        Round[num].insert(0, NN)  # 회전 끝
        spin[num] = -1

        if num == 0:
            if spin[num+1] != -1:
                if change_num2 != Round[num+1][6]:
                    cal(num+1, -1)
        elif num == 3:
            if spin[num-1] != -1:
                if change_num6 != Round[num-1][2]:
                    cal(num-1, -1)
        else:
            if spin[num-1] != -1:
                if change_num6 != Round[num-1][2]:
                    cal(num-1, -1)
            if spin[num+1] != -1:
                if change_num2 != Round[num+1][6]:
                    cal(num+1, -1)

    else:  # 반시계방향 회전
        change_num2 = Round[num][2]
        change_num6 = Round[num][6]
        NN = Round[num][0]
        del Round[num][0]
        Round[num].append(NN)
        spin[num] = -1

        if num == 0:
            if spin[num+1] != -1:
                if change_num2 != Round[num+1][6]:
                    cal(num+1, 1)
        elif num == 3:
            if spin[num-1] != -1:
                if change_num6 != Round[num-1][2]:
                    cal(num-1, 1)
        else:
            if spin[num-1] != -1:
                if change_num6 != Round[num-1][2]:
                    cal(num-1, 1)
            if spin[num+1] != -1:
                if change_num2 != Round[num+1][6]:
                    cal(num+1, 1)


Total = int(input())
for i in range(Total):
    R_num, direction = map(int, input().split())
    cal(R_num-1, direction)
    spin = [0 for i in range(4)]

result = 0
if Round[0][0] == 1:
    result += 1
if Round[1][0] == 1:
    result += 2
if Round[2][0] == 1:
    result += 4
if Round[3][0] == 1:
    result += 8

print(result)
