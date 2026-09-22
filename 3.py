n = int(input("Enter number of students: "))

names = []

for i in range(n):
    name = input("Enter name of student " + str(i + 1) + ": ")
    names.append(name)

search = input("Enter name to search: ")

# Case-sensitive search
found = False

for i in range(n):
    if names[i] == search:
        print("Case-sensitive: Student found at position", i + 1)
        found = True
        break

if not found:
    print("Case-sensitive: Student not found")

# Case-insensitive search
found = False

for i in range(n):
    if names[i].lower() == search.lower():
        print("Case-insensitive: Student found at position", i + 1)
        found = True
        break

if not found:
    print("Case-insensitive: Student not found")