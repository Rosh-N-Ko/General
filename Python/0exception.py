a = input("type a number")
a=int(a)
b = input("type another number")
b=int(b)
try:
    print(a / b)
except ZeroDivisionError:
    print("b cannot be zero. Try again.")
