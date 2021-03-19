N = int(input())
box = []

for i in range(N):
    s, e = map(int, input().split())
    box.append((s, e))

F = sorted(box, key=lambda x: x[0])
F = sorted(box, key=lambda x: x[1])

meeting_count = 0
start_time = 0

for time in F:
    if time[0] >= start_time:
        start_time = time[1]
        meeting_count += 1


print(meeting_count)
