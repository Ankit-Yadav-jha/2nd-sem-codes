celsius = [0, 20, 37, 100]

def to_fahrenheit(c):
    return (c * 9/5) + 32

fahrenheit = list(map(to_fahrenheit, celsius))
print(fahrenheit)
