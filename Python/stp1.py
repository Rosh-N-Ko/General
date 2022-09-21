while(True):
    age=input("How old are you ")
    age=int(age)
    if age>21:
        print("ayy you can drink now ")
    elif age<21:
        print("ayy you can drink ,but its like illegal and stuff ")
    else:
        print("who are you and why is your age a mystery , hmmmmmm")
    
    
    exit=input("Press exit to exit ")
    if exit.lower()=="exit":
        break