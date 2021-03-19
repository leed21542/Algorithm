N, S = map(int, input().split())

box = list(map(int, input().split()))

Result = 0
Flag = False


def cal(Sum, Index, F):
    global N, S, box, Flag
    if Index >= N:
        return

    sub_sum = Sum + box[Index]
    if sub_sum == S:
        global Result
        Result += 1

    cal(sub_sum, Index+1, Flag)
    cal(Sum, Index+1, Flag)

    return


cal(0, 0, Flag)

print(Result)
