
name = input("Enter your name: ")
print(name)
n = int(input("Enter the FIRST index of the charactor to extract(index starting ->0): "))
m = int(input("Enter the SECOND index of the charactor till to extract(index starting ->0): "))
print("Extracted charactor: ",name[n:m+1])