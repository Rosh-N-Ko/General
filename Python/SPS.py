import random
userp=0
compp=0
option = ["rock" , "paper", "scissors"]
while True:
    print("Type Rock ,Paper or Scissors and the computer will try to defeat you .Press Q to quit\n")
    inp=input().lower()
    if inp=="q":
        break

    if inp not in option :
        print("Retry ")
        continue
    rand=random.randint(0,2)
    comp=option[rand] 
    
    if inp =="rock" and comp=="scissors":
        print("You won")
        userp+=1
        continue
    elif inp =="rock" and comp=="paper":
        print("You lost")
        compp+=1
    elif inp =="rock" and comp=="rock":
        print("You drew")
        continue 
    elif inp =="paper" and comp=="scissors":
        print("You lost")
        compp+=1
    elif inp =="paper" and comp=="rock":
        print("You won")
        userp+=1
        continue
    elif inp =="paper" and comp=="paper":
        print("You drew")
        continue 
    elif inp =="scissors" and comp=="paper":
        print("You won")
        continue 
        userp+=1
    elif inp =="scissors" and comp=="rock":
        print("You lost")
        compp+=1
    elif inp =="scissors" and comp=="scissors":
        print("You drew")
        continue 
print("Your  final score is ",userp)
print("Your  final score is ",compp)
