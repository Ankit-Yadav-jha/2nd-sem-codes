# cheking the prime number

prime = int(input("Enter any number to check that number is prime or not: "))

chek = 0

for i in range(2,prime+1):
    if (prime % i) == 0:
        chek += 1

if chek == 1:
    print("The number is prime.")
else:
    print("THE number is not a prime number!")