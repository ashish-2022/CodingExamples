import sqlite3
conn = sqlite3.connect('example.db')

c = conn.cursor()

# Insert a row of data
c.execute("INSERT INTO stocks VALUES ('2006-01-03','BUY','FHAT',100,35.14)")
c.execute("INSERT INTO stocks VALUES ('2006-01-06','SELL','CHAT',200,32.14)")
c.execute("INSERT INTO stocks VALUES ('2006-01-07','FIX','GHAT',100,35.14)")
c.execute("INSERT INTO stocks VALUES ('2006-01-08','GIVE','VHAT',300,34.14)")

# Save (commit) the changes
conn.commit()

# We can also close the connection if we are done with it.
# Just be sure any changes have been committed or they will be lost.
conn.close()