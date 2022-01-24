from tkinter import *
import tkinter.messagebox as tsmg
from tkinter.filedialog import askopenfilename,asksaveasfilename
import os
def newfile():
    global  file
    root.title("Untitled-notepad")
    file=None
    textarea.delete(1.0,END)
def openfile():
    global file
    file=askopenfilename(defaultextension=".txt",filetypes=[("All files","*.*"),("Text documents","*.txt")])
    if file=="":
        file=None
    else:
        root.title(os.path.basename(file) + " -Notepad")
        textarea.delete(1.0,END)
        f=open(file)
        textarea.insert(1.0,f.read())
        f.close()

def savefile():
    global file
    if file==None:
        file=asksaveasfilename(initialfile='Untitled.txt',defaultextension=".txt",filetypes=[("All files","*.*"),("Text documents","*.txt")])
        if file=="":
            file=None
        else:
            f=open(file,"w")
            f.write(textarea.get(1.0,END))
            f.close()
            root.title(os.path.basename((file) + "-Notepad"))
    else:
        f = open(file)
        f.writre(textarea.get(1.0, END))
        f.close()
def cut():
    textarea.event_generate(("<<Cut>>"))
def copy():
    textarea.event_generate(("<<Copy>>"))       #These events are automatically handled by python automatically
def paste():
    textarea.event_generate(("<<Paste>>"))
def about():
    tsmg.showinfo("About","Notepad by rdrishi")
if __name__ == '__main__':
 root=Tk()
 root.geometry("500x400")
 root.title("Untitled-Notepad")
 file=None
 scrollbar = Scrollbar()
 scrollbar.pack(fill=Y, side="right")
 textarea=Text(root,font="lucida 12",yscrollcommand=scrollbar.set)
 scrollbar.config(command=textarea.yview)
 textarea.pack(fill=BOTH,expand=True)
 m=Menu(root)

 m1=Menu(m,tearoff=0)
 m1.add_command(label="New",command=newfile)
 m1.add_command(label="Open",command=openfile)
 m1.add_command(label="Save",command=savefile)
 m1.add_separator()
 m1.add_command(label="Exit",command=quit)

 m2=Menu(m,tearoff=0)
 m2.add_command(label="Cut",command=cut)
 m2.add_command(label="Copy",command=copy)
 m2.add_command(label="Paste",command=paste)

 m3=Menu(m,tearoff=0)
 m3.add_command(label="About",command=about)

 m.add_cascade(label="File",menu=m1)
 m.add_cascade(label="Options",menu=m2)
 m.add_cascade(label="Help",menu=m3)
 root.config(menu=m)

 root.mainloop()
