a = [4, 6, 7, 876, 3, 34, 45, 6, 75, 57, 8, 76]

minValue = a[0]
maxValue = a[0]
ascSorting = []

for item in a:
    if minValue > item:
        minValue = item
    if maxValue < item:
        maxValue = item

#  Bubble Sort
for i  in range(len(a) - 1):  # Repeat passes for sorting
    for index in range(len(a) - 1):  # Iterate to the second-last element
        if a[index] > a[index + 1]:  # Compare adjacent elements
            a[index], a[index + 1] = a[index + 1], a[index]

print('Sorted list:', a)
                
while len(a):
    minValue = a[0]
    for item in a:
        if item < minValue:
            minValue = item 
    ascSorting.append(minValue) 
    a.remove(minValue) 

print("minValue:", minValue)
print("maxValue:", maxValue)
print("ascSorting:", ascSorting)


# Radix Sort

Array = [2,23,4454,56,676,787,523,34556,67,90,9]
bigIntegerCount = 0

for item in Array:
    digitLength = len(str(item))
    if digitLength > bigIntegerCount:
        bigIntegerCount = digitLength
        

string = 'my Name is Khushal'
namedArray = string.split(' ')
updatedString = list(reversed(namedArray))
print(" ".join(namedArray))
 

