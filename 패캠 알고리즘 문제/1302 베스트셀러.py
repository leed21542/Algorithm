Total = int(input())
box = dict()
for _ in range(Total):
    text = input()
    if text not in box:
        box[text] = 1
    else:
        box[text] += 1

target = max(box.values())
array = []

for book, num in box.items():
    if num == target:
        array.append(book)

A = sorted(array)
print(A[0])
