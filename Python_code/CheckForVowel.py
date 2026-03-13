
string = input("Enter a string: ").lower()

vowels = ['a', 'e', 'i', 'o', 'u']

if all(vowel in string for vowel in vowels):
    print("The string contains all vowels")
else:
    print("The string does not contain all vowels")