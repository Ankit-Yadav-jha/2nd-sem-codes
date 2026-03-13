

def Swap1(a,b):
    print(a,b)
    a,b = b,a
    print(a,b)

def Swap2(a,b):
    print(a,b)
    temp = a
    a = b
    b = temp
    print(a,b)

def Swap3(a,b):
    print(a,b)
    a = a + b
    b = a - b
    a = a - b
    print(a,b)

x = int(input("Enter the X values: "))
y = int(input("Enter the Y values: "))

opt = 0

while opt != 4: 
    print("====METHOD====\n1.Simple\n2.TempVal\n3.Maths\n4.Exit!")
    opt = int(input("Enter which method: "))

    match opt:
        case 1:
            Swap1(x,y)
        case 2:
            Swap2(x,y)
        case 3: 
            Swap3(x,y)
        case 4:
            print("Exiting the program...")