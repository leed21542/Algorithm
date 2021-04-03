class Node:
    def __init__(self,  item, left, right):
        self.parent = -1
        self.item = item
        self.left = left
        self.right = right


def cal(node, level):
    global level_depth, x
    level_depth = max(level_depth, level)
    if node.left != -1:
        cal(tree[node.left], level+1)
    level_min[level] = min(level_min[level], x)
    level_max[level] = max(level_max[level], x)
    x += 1
    if node.right != -1:
        cal(tree[node.right], level+1)


N = int(input())
tree = {}
root = -1
x = 1
level_min = [N]
level_max = [0]
level_depth = 1

for i in range(1, N+1):
    tree[i] = Node(i, -1, -1)
    level_min.append(N)
    level_max.append(0)

for _ in range(N):
    root, L, R = map(int, input().split())
    tree[root].left = L
    tree[root].right = R
    if L != -1:
        tree[L].parent = root
    if R != -1:
        tree[R].parent = root

for i in range(1, N+1):
    if tree[i].parent == -1:
        root = i

cal(tree[root], 1)

result_level = 1
result_width = level_max[1] - level_min[1] + 1
for i in range(2, level_depth+1):
    width = level_max[i] - level_min[i]+1
    if result_width < width:
        result_level = i
        result_width = width

print(result_level, result_width)
