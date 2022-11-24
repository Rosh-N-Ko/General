#frame line
fr_line1=Frame(window,height=1,width=400, bg=col1)
fr_line1.grid(row=0,column=0)
#frame body
fr_body=Frame(window,height=300,width=400,bg=col1)
fr_body.grid(row=1,column=0)

#image 
img=Image.open('icons8-owl-100.png')
img.resize((100,100))
img=ImageTk.PhotoImage(img)
fram_img=Label(fr_body,height=100,width=100,image=img,bg=col1)
fram_img.place(x=10,y=20)

#Alarm Label
alarm=Label(fr_body,text="Alarm",font=('Arial 25 bold'),fg=col2,bg=col1)
alarm.place(x=115,y=25)
