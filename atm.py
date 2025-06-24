money = int(input("Money invested: "))
price =int(input("item price: "))
change = money - price
print("Change: ", change)


coin1000s= change // 1000  # The number of 10000 won coins divided by 10000
change = change % 1000    # Calculate the remainder when divided by 1000.
coin100s = change // 100    # The number of 100 won coins divided by 100


print("Number of 1000 won bills: ", coin1000s)
print ("Number of 100 won coins: ", coin100s)
