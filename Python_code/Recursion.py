
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)
    
num = int(input("Enter the value to find the factorial: "))

print(factorial(num))