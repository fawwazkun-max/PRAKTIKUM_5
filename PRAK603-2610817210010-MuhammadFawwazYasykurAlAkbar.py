first_count, second_count = map(int, input().split())

if first_count != second_count:
    print("Jumlah tidak sama")
else:
    first_row = list(map(int, input().split()))
    second_row = list(map(int, input().split()))
    result = []

    for i in range(first_count):
        result.append(first_row[i] * second_row[i])

    print(*result)
