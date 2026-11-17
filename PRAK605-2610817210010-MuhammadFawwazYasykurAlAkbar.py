matrix_size = int(input())
A = []
B = []

# Lewati label matriks seperti "Matriks A" pada format input modul.
input()
for i in range(matrix_size):
    row_a = list(map(int, input().split()))
    A.append(row_a)

# Lewati label "Matriks B".
input()
for i in range(matrix_size):
    row_b = list(map(int, input().split()))
    B.append(row_b)

print("Matriks AXB")
for i in range(matrix_size):
    result = []
    for j in range(matrix_size):
        total = 0
        for k in range(matrix_size):
            total = total + A[i][k] * B[k][j]
        result.append(total)
    print(*result)
