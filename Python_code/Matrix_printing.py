R = int(input("ENter the number of rows: "))
C = int(input("ENter the number of columns: "))

# Initialize matrix
matrix = []
print("Enter the entries rowwise: ")

#For user input
for i in range(R):
  a = []
  for j in range(C):
    a.append(int(input()))
  matrix.append(a)

# For i in range(R):
for j in range(R):
  for j in range(C):
      print(matrix[i][j]),end=" ")
  print()
