N = int(input())
box = list(map(int, input().split()))

M = int(input())
num = 0

box.sort()


def cal(num):
    l = 0
    r = N-1

    while l <= r:
        mid = (l+r)//2

        if box[mid] == num:
            return 1
        elif box[mid] > num:
            r = mid-1
        else:
            l = mid+1

    return 0


num = list(map(int, input().split()))

for i in num:
    print(cal(i), end=' ')
