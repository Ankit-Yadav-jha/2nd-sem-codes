balance = 10000
passd = 5487

def Checker():
    passw = int(input("Enter your passward: "))
    if(passw == passd):
        print("Balance: ",balance)
    else:
        print("Your passward is incorrect!")

def TakeMoney():
    passw = int(input("Enter your passward: "))
    if(passw == passd):
        print("Balance: ",balance)
    else:
        print("Your passward is incorrect!")
    take = int(input("How much money you have to withdraw: "))
    print(f"Now you have {balance-take}Rs in your bank.")




print("-----ATM WITHDRAW-----")
print("1.Check Balance\n2.Withdraw Money\n3.Exit")
opt = int(input("Enter the queurey: "))

match opt:
     case 1: Checker() 
     case 2: TakeMoney()
     case 3: print("Exiting the program!")