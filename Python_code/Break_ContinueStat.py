for i in range(1,11):
    if 5 == i:
        break
    print(i,end=" ")

print("\n")
for i in range(1,11):
    if 5 == i:
        continue
    print(i,end=" ")

print("\n")

List = ["Ankit","","Yadav"]  

for name in List:
    if name == "":
        continue
    print(name,end=" ")

print("\n")

nam1 = list(input("Enter your name: "))

for N in nam1:
    print(N)