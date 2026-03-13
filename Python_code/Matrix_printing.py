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
for i in range(R):
  for j in range(C):
    print(matrix[i][j],end=" ")
  print()

#Addition of matrix elements:

total = 0

for i in range(R):
   for j in range(C):
      total = total + matrix[i][j]

print(total)

# Addition of matrices:

matrix2 = []


# Taking input:


for i in range(R):
  b = []
  for j in range(C):
    b.append(int(input()))
  matrix2.append(b)

TotalMax = 0

for i in range(R):
  for j in range(C):
     TotalMax = TotalMax + matrix[i][j] + matrix2[i][j]

print(TotalMax)

   
