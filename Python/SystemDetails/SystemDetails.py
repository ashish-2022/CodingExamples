import psutil

from tkinter import *
from tkinter import ttk

root = Tk()
root.title("NetBackup Troubleshoot")

# Create and grid the outer content frame
c = ttk.Frame(root, padding=(5, 5, 12, 0))
c.grid(column=0, row=0, sticky=(N,W,E,S))
root.grid_columnconfigure(0, weight=1)
root.grid_rowconfigure(0,weight=1)

lbl = ttk.Label(c, text="System Details")
lbl.grid(column=1, row=0, padx=10, pady=5)

mem = psutil.virtual_memory()
mem.total  # total physical memory available

lb2 = ttk.Label(c, text="Total Memory: " + str(mem.total), justify=LEFT)
lb2.grid(column=1, row=1, padx=10, pady=5, sticky=W)

lb2 = ttk.Label(c, text="Memory Available: " + str(mem.available), anchor=W, justify=LEFT)
lb2.grid(column=1, row=2, padx=10, pady=5, sticky=W)

lb2 = ttk.Label(c, text="Total Used: " + str(mem.used), anchor=W, justify=LEFT)
lb2.grid(column=1, row=3, padx=10, pady=5, sticky=W)

lb2 = ttk.Label(c, text="CPU count: " + str(psutil.cpu_count()), anchor=W, justify=LEFT)
lb2.grid(column=1, row=4, padx=10, pady=5, sticky=W)

lb2 = ttk.Label(c, text="Disk Free: " + str(psutil.disk_usage(".").free), anchor=W, justify=LEFT)
lb2.grid(column=1, row=5, padx=10, pady=5, sticky=W)

lb2 = ttk.Label(c, text="Disk Used: " + str(psutil.disk_usage(".").used), anchor=W, justify=LEFT)
lb2.grid(column=1, row=6, padx=10, pady=5, sticky=W)

c.grid_columnconfigure(0, weight=1)
c.grid_rowconfigure(5, weight=1)

root.mainloop()
