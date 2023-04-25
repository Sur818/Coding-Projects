import mysql.connector
con=mysql.connector.connect(
host='localhost',
user='root',
password='root',
db="student"
)
c=con.cursor()
#c.execute("CREATE DATABASE student")
#con.commit()
#c.execute("SHOW DATABASES")
#for x in c:
#	print(x)
#c.execute("CREATE TABLE information(name varchar(20),mark int(11),age int(11))")
#con.commit()
#c.execute("SHOW TABLES")
#for x in c:
#	print(x)
#c.execute("INSERT INTO information VALUES('RAM',20,20)")
#con.commit()
c.execute("SELECT *FROM information")
for x in c:
	print(x)



