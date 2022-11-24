from tkinter.ttk import *
from tkinter import *

from datetime import datetime as dt
from turtle import width 
#version 1 includes a program that tells you the associated event with the time,time
# will be goit from the datetime module and the even will be hard coded in ,but eventually it will be read from the excel file 
#VErsion 1 has if else staements and is run on the console , the enext version will be run on an executable file with an appropriate gui 
#The next version will also have a function that sends the aprppraite text to be shown on the gui 
#The next feature should also be a weather app
print("This is the place you will come to show you your time table ")
now =dt.now()
hour=now .strftime("%H")
min=now.strftime("%M")

h=int(hour)
m=int(min)
print(h)   
print(min)

text=""


def logic():
#sleep
    if(h<=3):
        text="Why are you awake go back to sleep"
#wake up 
    elif(h==4 ):
        if(m<30):
            text="Rise and grind gamers "
        else:
            text="Batch 1 begins now"
#Batch 1
    elif((h>=5 )&(h<=7)):
        if(m>45):
            text="It is close to pack up time "
        else:
            text="Batch 1 is stil in progress"
#Batch 1 ending             
    elif((h==8)):
        if(m<45):
            text="Batch 1 has ended , proceed to take a break and prepare yourself for batch 2"
        else:
            text="BAtch 2 will begin shortly ,please hurry"
#Batch 2 begin 
    elif((h>=9)&(h<=13)):
        if((h==13)&(m>45)):
            text="Lunch time , Let's go "
        else:
            text="Batch 2 is in session "
#Lunch , Batch 3 and gym
    elif(h==14):
        text=" go home,prepare food and get ready for batch 3  "
    elif(h==15):
        text="simple stuff+Review time "
    elif((h>=16)&(h<=18)):
        if(m<15):
            text="Prepare for gym time "    
        elif(m>15&(m<30)):
            text="Go to the gym'"
        else:
            text="You are supposed to be in the gym right now "


    elif((h>=18)&(h<=19)):
        text="Break time ,read ,pray, have dinner "
    elif(h==20):
        text="Pray and read "
    elif(h>21):
        text="it's time to sleep"
    else:
        text="You've got a bug my guy"

    return text

print(logic())

main=Tk()
main.title("Suite Prod v1")
main.geometry('500x500')
f1=Frame(main) 
l1=Label,f1,text=logic(),font=("Baskerville",35),fg="pink",bg="black") 
l1.place(x=15,y=0)
l1.size()
main.mainloop()