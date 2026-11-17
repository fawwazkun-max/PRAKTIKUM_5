rows, columns = map(int, input().split())
numbers = list(map(int, input().split()))

for i in range(rows):
    start_index = i * columns
    end_index = start_index + columns
    print(*numbers[start_index:end_index])
