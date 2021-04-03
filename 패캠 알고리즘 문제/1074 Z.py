import sys
N, r, c = map(int, sys.stdin.readline().split())


count = 0


def cal(x, y, row):
    global count, r, c
    if row == 2:
        if x == r and y == c:
            print(count)
            exit(0)
        count += 1

        if x == r and y+1 == c:
            print(count)
            exit(0)
        count += 1

        if x+1 == r and y == c:
            print(count)
            exit(0)
        count += 1

        if x+1 == r and y+1 == c:
            print(count)
            exit(0)
        count += 1
        return
    if not (x <= r < x + row and y <= c < y + row):
        count += row * row
        return
    cal(x, y, row//2)  # 1사분면
    cal(x, y+row//2, row//2)  # 2사분면
    cal(x+row//2, y, row//2)  # 3사분면
    cal(x+row//2, y+row//2, row//2)  # 4사분면


cal(0, 0, 2**N)
