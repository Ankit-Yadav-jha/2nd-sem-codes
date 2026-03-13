# Use of (in & not in)

student = ["Himanshu","Amit","Jay","Akash","Dishant"]
book = ["Python","Data Structure","Machine Learnig"]

def SeaStudent():
    search = input("Enter the student name to search: ")

    if(search in student):
        print(f"YES!,{search} student is present in class.")
    else:
        print(f"{search} student is not present in class!")

def SeaBook():
    search = input("Enter the book name to search: ")

    if(search in book):
        print(f"YES!,{search} book is present in library.")
    else:
        print(f"{search} book is not present in library!")

opt = None

while(opt != 3):
    print("-----FINDER-----")
    print("1.Student\n2.Book\n3.Exit")
    opt = int(input("Enter you Queurey: "))

    match opt:
        case 1: SeaStudent()
        case 2: SeaBook()
        case 3: print("Exiting the program!")

