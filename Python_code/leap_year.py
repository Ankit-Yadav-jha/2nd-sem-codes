
year = int(input("Enter the year to check the leap year: "))

if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
    print("THis year is a leap year!")
else:
    print("This year is not leap year!")
   