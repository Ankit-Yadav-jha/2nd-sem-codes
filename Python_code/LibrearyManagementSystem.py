Books = []
cho =None
while cho != 5:
    print("*"*20)
    print("Library System")
    print("1.Add Book\n2.Display Book\n3.Search Book\n4.Remove Book\n5.Exit..")
    cho = int(input("Enter your choice: "))

    match cho:
        case 1:
            name = input("Enter the book name: ")
            Books.append(name)
            print("Book added successfuly!")
        case 2:
            print("\nBook Names:")
            for i in Books:
                print(i)
        case 3:
            sear = input("Enter book name: ")
            if sear in Books:
                print("Yes, this book is present in Library!")
            else:
                print("This book is not present in Library!")
        case 4:
            j = -1
            for i in Books:
                print(i,j+1)
            rem = int(input("Enter the book index to remove: "))
            Books.pop(rem)
            print("Book removed successfuly!")
        case 5:
            print("Exiting the program....")

