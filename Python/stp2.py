print("Percentage calculator ,caus e you are lazy ")
num=input("Lower number?")
num=int(num)
den=input("Higher number ")
den=int(den)
def perc(num,den):
    perce=(num/den)*100
    return perce
print("You have completed",perc(num,den),"%")

