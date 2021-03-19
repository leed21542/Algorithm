N = int(input())
box = list(map(int,input().split()))
box.sort()
M = int(input())
find = list(map(int,input().split()))


for i in range(len(find)):
    Flag = False
    num = find[i]
    
    start = 0
    end = N-1
    while start <= end:
        mid = (start+end)//2
        if box[mid] == num:
            print(1)
            Flag = True
            break
        elif box[mid] >= num:
            end = mid-1
        elif box[mid] < num:
            start = mid+1
    
    if not Flag:
        print(0) 