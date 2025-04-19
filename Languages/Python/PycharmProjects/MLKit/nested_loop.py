for x in range(2):
    for y in range(2):
        print(f"({x},{y})")

number= [5,2,5,2,2]
style="x"
for demo in number:
    style=''
    for demo2 in range(demo):
        style+='x'
    print(style)
