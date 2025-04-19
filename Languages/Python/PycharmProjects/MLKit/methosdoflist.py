numbers = [2,2,4,6,3,4,6,1]

print(numbers)
uniq=[]
for list in numbers:
    if list not in uniq:
        uniq.append(list)
print(f" The new uniq list is here:{uniq}")
print(uniq)