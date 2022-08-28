print("Welcome to my quiz")
play = input("Do you wanna play ")
if play !="yes":
    quit()

point=0
print("Okay lets begin ")
answer = input("What does CPU stand for ")
text=(answer.lower())
if text =="cpu":
    print("correct ")
    point+=1
else:
    print("Incorrect")
print("You got " + str(point) + " questions correct!")