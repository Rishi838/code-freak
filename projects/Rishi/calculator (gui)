from tkinter import *
def click(event):
    global scvalue
    text=event.widget.cget("text")
    if text== '=':
        if scvalue.get().isdigit():
          value=int(scvalue.get())
        else:
            value=eval(scvalue.get())
        scvalue.set(value)
        screen.update()
    elif text == 'Clear':
        scvalue.set("")
        screen.update()
    else:
        scvalue.set(scvalue.get() + text)
        screen.update()
root=Tk()
root.title("Calculator")
root.geometry("310x170")
root.minsize(310,170)
root.maxsize(310,170)
root.config(background="light grey")
scvalue=StringVar()
scvalue.set("")
screen=Entry(root,textvariable=scvalue,font="lucida 20",tex)
screen.grid(columnspan=4,ipady=8)

button1=Button(root,text="9",bg="grey",fg="black",height=1,width=7)
button1.grid(row=2,column=0)
button1.bind('<Button-1>',click)

button1=Button(root,text="8",bg="grey",fg="black",height=1,width=7)
button1.grid(row=2,column=1)
button1.bind('<Button-1>',click)

button1=Button(root,text="7",bg="grey",fg="black",height=1,width=7)
button1.grid(row=2,column=2)
button1.bind('<Button-1>',click)

button1=Button(root,text="+",bg="grey",fg="black",height=1,width=7)
button1.grid(row=2,column=3)
button1.bind('<Button-1>',click)

button1=Button(root,text="6",bg="grey",fg="black",height=1,width=7)
button1.grid(row=3,column=0)
button1.bind('<Button-1>',click)

button1=Button(root,text="5",bg="grey",fg="black",height=1,width=7)
button1.grid(row=3,column=1)
button1.bind('<Button-1>',click)

button1=Button(root,text="4",bg="grey",fg="black",height=1,width=7)
button1.grid(row=3,column=2)
button1.bind('<Button-1>',click)

button1=Button(root,text="-",bg="grey",fg="black",height=1,width=7)
button1.grid(row=3,column=3)
button1.bind('<Button-1>',click)


button1=Button(root,text="3",bg="grey",fg="black",height=1,width=7)
button1.grid(row=4,column=0)
button1.bind('<Button-1>',click)

button1=Button(root,text="2",bg="grey",fg="black",height=1,width=7)
button1.grid(row=4,column=1)
button1.bind('<Button-1>',click)

button1=Button(root,text="1",bg="grey",fg="black",height=1,width=7)
button1.grid(row=4,column=2)
button1.bind('<Button-1>',click)

button1=Button(root,text="*",bg="grey",fg="black",height=1,width=7)
button1.grid(row=4,column=3)
button1.bind('<Button-1>',click)


button1=Button(root,text="0",bg="grey",fg="black",height=1,width=7)
button1.grid(row=5,column=0)
button1.bind('<Button-1>',click)

button1=Button(root,text="Clear",bg="grey",fg="black",height=1,width=7)
button1.grid(row=5,column=1)
button1.bind('<Button-1>',click)

button1=Button(root,text="=",bg="grey",fg="black",height=1,width=7)
button1.grid(row=5,column=2)
button1.bind('<Button-1>',click)

button1=Button(root,text="/",bg="grey",fg="black",height=1,width=7)
button1.grid(row=5,column=3)
button1.bind('<Button-1>',click)




root.mainloop()
