
student = [] #list
Mark = []


std = {} #dis..
def CRECORD():
    n = int(input("How many records to create: "))
    for i in range(n):
        std["name"] = input("Enter name: ")
        std["age"] = int(input("Enter age: "))
        std["roll_no"] = input("Enter roll number: ")
        student.append(std)   # add dictionary to list   


def MARKS():
    n = int(input("How many key-value pairs do you want to enter? "))
    for i in range(n):
        key = input("Enter key: ")
        value = input("Enter value: ")
        std[key] = value
    Mark.append(std)


def SHOW():
    print(student)


def SHOWM():
    print(Mark)
    
       
       

opt = 0
while(opt !=5):
    print("\n----Student Record Manager----")
    print("1. Create Record\n2. Marks Entry\n3. Show Record\n4. Show Marks\n5. Exit")
    opt = int(input("Give your task here: "))
    match opt:
        case 1:
            CRECORD()
            print("Record created successfuly")

        case 2:
            MARKS()
            print("Marks entered successfuly")
            
        case 3: 
            print("Showing records:")
            SHOW()

        case 4:
            print("Printing the Marks: ")
            SHOWM()
            
        
        case 5:
            print("Exiting program!")
        

           

