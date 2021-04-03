Total = int(input())
box = []
for i in range(Total):
    age, name = input().split()
    box.append((int(age), i, name))

c = sorted(box, key=lambda box: (box[0], box[1]))

for i in range(len(c)):
    print(c[i][0], c[i][2], end='\n')
