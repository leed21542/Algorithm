Total = int(input())

for _ in range(Total):
    num = int(input())
    
    box = [0]*12
    box[0],box[1],box[2] = 1,2,4
    
    for i in range(3,num):
        box[i] = box[i-1]+box[i-2]+box[i-3]
    
    print(box[num-1])