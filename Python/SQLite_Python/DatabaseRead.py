import sqlite3
conn = sqlite3.connect('example.db')

c = conn.cursor()

for row in c.execute('SELECT * FROM stocks ORDER BY price'):
  print(row)


  
conn.row_factory = sqlite3.Row
c = conn.cursor()
c.execute('select * from stocks')
r = c.fetchone()
print (type(r))
print (tuple(r))
print (len(r))
print (r[2])
print (r.keys())
conn.close()