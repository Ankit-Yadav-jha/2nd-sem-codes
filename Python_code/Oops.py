
class Atm:
    
    # Constructor
    def __init__(self):
        self.pin = ""
        self.balance = 0
        self.menu()
        
    def menu(self):
        choic = int(input("""
        =========MENU=========
        1. Create pin
        2. Change pin
        3. Show balance
        4. Deposit
        5. Withdraw
        6. Exit
        Enter Ur choice here :"""))

        match choic:
            case 1:
                # create pin
                self.Creat_pin()
            case 2:
                # change pin
                self.Change_pin()
            case 3:
                # show balance
                self.Show_balance()
            case 4:
                # give money
                self.Deposit()
            case 5:
                # take money
                self.Withdraw()
            case 6:
                print("Exiting the program...")

    def Creat_pin(self):
        self.pin = int(input("Enter the pin: "))
        self.balance = int(input("Enter the balance also: "))
        print("All set successfuly!")
        self.menu()
    
    def Change_pin(self):
        old_pin = int(input("Enter your old pin: "))
        if old_pin == self.pin:
            new_pin = int(input("Enter the new pin: "))
            print("Pin created!")
        else:
            print("Pin galat hai,Try again")
        self.menu()

    def Show_balance(self):
        old_pin = int(input("Enter your old pin: "))
        if old_pin == self.pin:
            print("Balance : ",self.balance)
        else:
            print("Pin galat hai,Try again")
        self.menu()

    def Deposit(self):
        old_pin = int(input("Enter your old pin: "))
        if old_pin == self.pin:
            much = int(input("Enter money here: "))
            self.balance += much
            print("Added successfuly!")
        else:
            print("Pin galat hai,Try again")
        self.menu()
    
    def Withdraw(self):
        old_pin = int(input("Enter your old pin: "))
        if old_pin == self.pin:
            much = int(input("Enter money here: "))
            if self.balance >= much:
                self.balance -= much
                print("Debited successfuly!")
            else:
                print("Insuficient balance..")
        else:
            print("Pin galat hai,Try again")
        self.menu()


A1 = Atm()

