import random 
print("Guess the number ,win a prize ")
answer = input("Enter the limit ")
r=random.randrange(0,int(answer))
r2=random.randint(0,10)
guess=0
if answer.isdigit():
    while True:
        a=input("MAke a guess : ") 
        if int(a)==r :
            print("The guess is correct ")
            guess+=1
            break
        elif(int(a)<=r):
            print("The guess is higher ")
            guess+=1
            continue 
        elif(int(a)>=r):
            print("The guess needs to be lower ")
            guess+=1    
            continue
        else:
            print("The number was " + str(r) + " Please try again next time ")
            guess+=1
print ("You made ", guess ,"guesses")
if r2==r:
    print("The 2 random numbers are the same .What a wow ")
else:
    print("The 2 random numbers are not the same .Sad.")
    
    