n = int(input("Enter number of students: "))
art = []
for i in range(n):
    attendance = float(input(f"Enter attendance of student {i + 1}: "))
    art.append(attendance)

threshold = float(input("Enter attendance threshold: "))
count = 0
for attendance in art:
    if attendance < threshold:
        count += 1
lowest = min(art)
position = art.index(lowest) + 1
average = sum(art) / n

print("\nStudents below threshold:", count)
print("Lowest attendance:", lowest)
print("Student position:", position)
print("Average attendance:", average)

