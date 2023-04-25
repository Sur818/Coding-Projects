import mysql.connector
con=mysql.connector.connect(
host='localhost',
user='u0_a43@localhost',
password='',

)
c=con.cursor( )
for x in c:
	print(x)
