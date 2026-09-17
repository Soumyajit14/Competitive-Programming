n = int(input("Enter number of hours: "))

patients = []

for i in range(n):
    x = int(input(f"Enter patients in hour {i + 1}: "))
    patients.append(x)

maximum = max(patients)
max_hour = patients.index(maximum) + 1
minimum = min(patients)
peak_hour = max_hour
average = sum(patients) / n
hours_above_average = sum(1 for x in patients if x > average)

print("\nMaximum patients:", maximum)
print("Hour when maximum occurred:", max_hour)
print("Minimum patients:", minimum)
print("Peak hour:", peak_hour)
print("Average patients:", average)
print("Hours above average:", hours_above_average)

