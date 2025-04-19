arr = [8, 7, 56, 334, 4, 5, 6, 778, 89, 9, 123, 69, 55]

# Bubble Sort Algorithm
n = len(arr)

for i in range(n):
    for j in range(0, n - i - 1):
        if arr[j] > arr[j + 1]:
            arr[j], arr[j + 1] = arr[j + 1], arr[j]

print(arr)
