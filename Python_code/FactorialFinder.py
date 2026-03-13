num = int(input("Enter the number to find the factorial of that number: "))

fact = 1

for i in range(1,num+1):
    fact = fact * i

print("THE FACTORIAL IS: ",fact)