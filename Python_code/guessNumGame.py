import random

count = 0

guess = random.randint(1,101)
print("====== Guessing Game ======")
user = int(input("Enter your guess under(1-100): "))

while guess != user:
    
    if guess == user:
        print("Your guess is correct!")
    elif user > guess:
        print("Guess a lower number")
    else:
        print("Guess a higher number")
    user = int(input("Enter your guess: "))
    count += 1

print(f"You guess the number in {count} rounds! ")