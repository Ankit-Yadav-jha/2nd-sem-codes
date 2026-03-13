
string = input("Enter a string: ")

if string == string[::-1]:
    print("The string is Palindrome")
else:
    print("The string is not Palindrome")
n = len(string)

if n % 2 == 0:
    first_half = string[:n//2]
    second_half = string[n//2:]
else:
    first_half = string[:n//2]
    second_half = string[n//2+1:]

if first_half == second_half:
    print("The string is Symmetrical")
else:
    print("The string is not Symmetrical")