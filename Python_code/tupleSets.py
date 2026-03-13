

# Tuples are immutalble Data Structures and you can not inserst and delete anything in it.
# And also u can not edit or remove anything.

tup = ("Hello I am Striver")                  

print(tup)

# sets are mutalble and set only stores unique values and if in case of dupicalte values it will remove 
# duplicate values automaticlay..


set1 = {1,3,4,53,2,4,5,22,5,3,111,4,565,7,8,3,12,3,1} 
set1.add(45)
print(set1)
set1.discard(565)
set1.remove(111)

print(set1)

print("*"*20)

A = {1,2,3,6}
B = {2,5,6,7}
print("Union:",A|B)
print("Intersection: ",A&B)
print("Difference: ",A-B)