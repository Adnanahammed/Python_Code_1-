def fun(n):
    if n% 2==0:
        return"even number"

    else:
       return"odd number"


x=int(input("Enter a number between 1 and 100: "))

result=fun(x)

print(result)
