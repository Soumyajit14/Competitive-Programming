n = int(input("Enter number of products: "))

prices = []

for i in range(n):
    price = float(input("Enter price of product " + str(i + 1) + ": "))
    prices.append(price)

prices.sort()

print("Prices in ascending order:")

for price in prices:
    print(price)