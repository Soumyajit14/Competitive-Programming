n = int(input("Enter number of hours: "))

patients = []

for i in range(n):
    p = int(input("Enter patients in hour " + str(i + 1) + ": "))
    patients.append(p)


maximum = patients[0]
max_hour = 1

for i in range(1, n):
    if patients[i] > maximum:
        maximum = patients[i]
        max_hour = i + 1


minimum = patients[0]

for p in patients:
    if p < minimum:
        minimum = p

peak_hour = max_hour


total = 0
for p in patients:
    total += p

average = total / n


above_average = 0

for p in patients:
    if p > average:
        above_average += 1

print("Maximum patients:", maximum)
print("Hour of maximum:", max_hour)
print("Minimum patients:", minimum)
print("Peak hour:", peak_hour)
print("Average patients:", average)
print("Hours above average:", above_average)