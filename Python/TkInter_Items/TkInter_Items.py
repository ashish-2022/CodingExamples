
from tkinter import *
from tkinter import ttk
from tkinter import messagebox

root = Tk()
root.title("Tk dropdown example")

# Add a grid
mainframe = Frame(root)
mainframe.grid(column=0,row=0, sticky=(N,W,E,S) )
mainframe.columnconfigure(0, weight = 1)
mainframe.rowconfigure(0, weight = 1)


def showSelection(*args):
  nColor=colorvar.get()
  myselection.set("%s color selected"%(nColor))

def showLang(*args):
  idxs = lbox.curselection()
  if len(idxs)==1:
    n = int(idxs[0])
    listItem = lbox.get(n)
    myselection2.set("%s selected"%(listItem))
  
def hello():
   messagebox.showinfo("Say Hello", "Hello World")

def bye():
   messagebox.showinfo("Say Bye", "Bye Bye!!")

def checkSel():
   messagebox.showinfo("CheckBox Selected", "Hello checked!!")
   
def addItem():
    lbox.insert(END, E1.get())
	
# ComboBox
choices = ["white", "red", "blue", "yellow", "green", "purple", "orange", "pink"]
colorvar = StringVar()
colorsBox = ttk.Combobox(root, textvariable=colorvar, values=choices)
colorsBox.grid(row = 2, column =1, padx=10, pady=5, sticky=W)
colorsBox.bind("<<ComboboxSelected>>", showSelection, "+")

# Label
myselection=StringVar()
Label(root, textvariable=myselection).grid(row = 3, column = 1, padx=10, pady=5, sticky=W)
myselection2=StringVar()
Label(root, textvariable=myselection2).grid(row = 3, column = 2, padx=10, pady=5, sticky=W)

# SpinBox
sBox = Spinbox(root, from_=0, to=10)
sBox.grid(row = 4, column = 1, padx=10, pady=5, sticky=W)

# ListBox
lbox = Listbox(root)
lbox.insert(1, "Python")
lbox.insert(2, "Perl")
lbox.insert(3, "C")
lbox.insert(4, "PHP")
lbox.insert(5, "JSP")
lbox.insert(6, "Ruby")

# EntryText
E1 = Entry(root, bd =5)
E1.grid(row = 7, column = 2, padx=10, pady=5, sticky=W)

lbox.grid(row = 7, column = 1, padx=10, pady=5, sticky=W)
lbox.bind('<<ListboxSelect>>', showLang)
B3 = ttk.Button(root, text = "Add Item", command = addItem)
B3.grid(row = 7, column = 3, padx=10, pady=5, sticky=W)

B1 = ttk.Button(root, text = "Say Hello", command = hello)
B1.grid(row = 1, column = 2, padx=10, pady=5, sticky=W)

B2 = ttk.Button(root, text = "Say bye", command = bye)
B2.grid(row = 2, column = 2, padx=10, pady=5, sticky=W)

#Radio Button
phone = StringVar()
home = ttk.Radiobutton(root, text='Home', variable=phone, value='home')
home.grid(row = 4, column = 2, padx=10, pady=5, sticky=W)
office = ttk.Radiobutton(root, text='Office', variable=phone, value='office')
office.grid(row = 5, column = 2, padx=10, pady=5, sticky=W)
cell = ttk.Radiobutton(root, text='Mobile', variable=phone, value='cell')
cell.grid(row = 6, column = 2, padx=10, pady=5, sticky=W)

# CheckBox
measureSystem = StringVar()
check = ttk.Checkbutton(root, text='Use Metric', 
	    command=checkSel, variable=measureSystem,
	    onvalue='metric', offvalue='imperial')
check.grid(row = 8, column = 2, padx=10, pady=5, sticky=W)	
root.mainloop()
