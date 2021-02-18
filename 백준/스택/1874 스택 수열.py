import sys
sys.setrecursionlimit(100000)

N = int(input())
stack = [1]
Compare = [int(input()) for i in range(N)]

point = 0
Num = 2
Answer = ['+']

while point != N:
    if len(stack) != 0:
        if Compare[point] == stack[-1]:
            del stack[-1]
            Answer.append('-')
            point += 1
        elif Num != N+1:
            stack.append(Num)
            Answer.append('+')
            Num += 1
        else:
            if stack[-1] == Compare[point]:
                del stack[-1]
                Answer.append('-')
                point += 1
            else:
                point += 1

    elif Num != N+1:
        stack.append(Num)
        Answer.append('+')
        Num += 1
    else:
        if stack[-1] == Compare[point]:
            del stack[-1]
            Answer.append('-')
            point += 1
        else:
            point += 1

if len(stack) == 0:
    for i in range(len(Answer)):
        print(Answer[i])
else:
    print('NO')
