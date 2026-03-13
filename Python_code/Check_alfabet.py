

vowel = ["a","e","i","o","u","A","E","I","O","U"]

taker = input("Enter the alfabet to check its vowel or constant: ")
count = 0

for vowels in vowel:
    if(taker == vowels):
        count = count + 1
    

if(count >= 1):
    print("Vowel")
else:
    print("Consonent")