List = list(map(int, input().split()))

first = List[0]
check = "no"
for i in range(1, len(List)):
    if check == "no":
        if abs(first - List[i]) == 1 and first < List[i]:  # 오름차순
            check = "ascending"
        elif abs(first - List[i]) == 1 and first > List[i]:
            check = "descending"
        else:
            check = "mixed"  # mixed이면 바로 탈출
            break
    else:
        if first < List[i] and check != "ascending":
            check = "mixed"
            break
        elif first > List[i] and check != "descending":
            check = "mixed"
            break
    first = List[i]

print(check)
