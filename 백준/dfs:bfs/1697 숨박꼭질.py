import collections
import sys
sys.setrecursionlimit(100000)

N, K = map(int, input().split())
check = [0 for _ in range(100002)]

queue = collections.deque()

queue.append(N)
Total_time = 0
Flag = False

while not Flag:
    L = len(queue)
    while L:
        Time = queue.popleft()
        L -= 1

        if Time == K:
            print(Total_time)
            Flag = True
            break

        check[Time] = 1

        if Time-1 >= 0:
            if check[Time-1] == 0:
                queue.append(Time-1)

        if Time+1 <= K:
            if check[Time+1] == 0:
                queue.append(Time+1)

        if (2 * Time) <= K:
            if check[(2*Time)] == 0:
                queue.append((2*Time))

    Total_time += 1
