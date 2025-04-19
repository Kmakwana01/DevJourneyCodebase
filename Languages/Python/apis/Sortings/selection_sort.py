a = [4, 6, 7, 876, 3, 34, 45, 6, 75, 57, 8, 76]
minValue = a[0]
maxValue = a[0]

for i  in range(len(a)): 
    smallValue = a[i]
    smallValueIndex = i
    for index in range(i + 1, len(a)):
        if a[index] < smallValue:
            smallValue = a[index]
            smallValueIndex = index
    a[i], a[smallValueIndex] = a[smallValueIndex], a[i]

print(a)

