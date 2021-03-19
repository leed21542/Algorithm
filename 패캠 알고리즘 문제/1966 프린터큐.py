import collections
Total = int(input())

for _ in range(Total):
    N, M = map(int,input().split())
    print_num = 1
    
    queue = collections.deque()
    box = list(map(int,input().split()))

    for i in range(N):
        queue.append((i,box[i]))
    
    while queue:
        Flag = False
        index, important = queue.popleft()

        for i in range(len(queue)):
            if queue[i][0] == index:
                continue
 
            if important < queue[i][1]:
                queue.append((index,important))
                Flag = True
                break
        
        if not Flag:
            if index == M:
                print(print_num)
                break
            else:
                print_num+=1 