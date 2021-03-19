Total = int(input())

for _ in range(Total):
    Left_stack,Right_stack = [],[]

    box = list(input())

    for i in range(len(box)):
        if box[i] == '<':
            if Left_stack:
                item = Left_stack.pop()
                Right_stack.append(item)
        elif box[i] == '>':
            if Right_stack:
                item = Right_stack.pop()
                Left_stack.append(item)
        elif box[i] == '-':
            if Left_stack:
                Left_stack.pop()
        else:
            Left_stack.append(box[i])
 
    Left_stack.extend(reversed(Right_stack))
    print(''.join(Left_stack))