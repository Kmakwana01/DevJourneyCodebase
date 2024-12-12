import time
a = [1,2,33,3,4,5,6,65,34,20]
b=(123,3,4,5,55,5,55,12,1444,10)
c={1,2,33,4,55,66,55,4,3,3,44}
d={
    'vinay':"hii",
    "lathi":"gujarat"
}
# def fun(x):
#     return x+x
# print(a,type(a))  
# print(b,type(b))      
# print(c,type(c))
# b = list(map(lambda x : x + x , d))
# # print(b)
# for index,i in enumerate(b):
    # print(index,i)
    
v = list(filter(lambda x:x>20,a))
print(v)
t = time.strftime("%M")
F = time.strftime("%m")
print(t,F)