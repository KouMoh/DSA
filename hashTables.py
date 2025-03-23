# Hashsets
s = set()
print(s)

# Strings

string = 'aaaaaaaaaasdddddddddddddddddddddddvvvvvvvvvvvvvvvffffff'
sett = set(string)

print(sett)

#HashMaps - Dictionaries

# HashMaps - Dictionaries

my_dict = {
    '1': 'value1',
    '2': 'value2',
    '3': 'value3',
    '4': 'value4'
}

print("Printing Dicionary:")

for key,value in my_dict.items():
    print(f'key:{key}: value {value}')

print("collections:")

from collections import defaultdict

default = defaultdict(int)
print(default[2])

print(default)

print("counter:")

from collections import Counter

counter = Counter(string)

print(counter)

