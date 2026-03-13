print("====== CALCULATER ======")
print("-------- MENU ----------")
cond = None
while cond != 5:
    print("----- MENU -----")
    print("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit")
    cond = int(input("Enter your choice: "))
 
    match cond:
        case 1: 
            num1 = int(input("Enter the first number: "))
            num2 = int(input("Enter the second number: "))
            add = num1 + num2
            print(f"The sum of {num1} and {num2} is {add}")
            #break
        case 2:
            num1 = int(input("Enter the first number: "))
            num2 = int(input("Enter the second number you have to subtra from fist num: "))
            add = num1 - num2
            print(f"The subtraction of {num2} from {num1} is {add}")
            #break
        case 3:
            num1 = int(input("Enter the first number: "))
            num2 = int(input("Enter the second number: "))
            add = num1 * num2
            print(f"The Multiplaction of {num1} and {num2} is {add}")
           #break
        case 4:
            num1 = int(input("Enter the first number: "))
            num2 = int(input("Enter the second number you have to divide from fist num: "))
            add = num1 / num2
            print(f"The division of {num1} from {num2} is {add}")
            #break
        case 5:
            print("Exiting the program...")
            #break