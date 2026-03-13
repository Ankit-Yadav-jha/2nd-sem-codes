print("-----Grade System-----")
grade = int(input("Enter you persentage of your marks: "))
if (grade >= 1 and grade <= 20):
    print("You got grade: F")
elif(grade >= 21 and grade <= 40):
    print("You got grade: C")
elif(grade >= 41 and grade <= 70):
    print("You got grade: B")
else:
    print("You got grade: A")