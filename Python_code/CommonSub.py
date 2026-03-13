

s1 = {"Rahul"}
s2 = {"Akash"}

for i in range(1,6):
    sub = input("Enter the subject name here: ")
    s1.add(sub)

print(s1)

for i in range(1,6):
    sub = input("Enter the subject name here: ")
    s2.add(sub)

print(s2)

print("The common subjects of 2 students are",s1 & s2)

