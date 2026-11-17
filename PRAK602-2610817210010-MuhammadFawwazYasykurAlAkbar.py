room_count = int(input())
room_counts = list(map(int, input().split()))

for i in range(room_count):
    room_counts[i] = room_counts[i] * (i + 1)

print(*room_counts)
