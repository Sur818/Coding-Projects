import mysql.connector
con=mysql.connector.connect(
host='localhost',
user='root',
password='root',
db='suraj'
)
c=con.cursor()
#c.execute("CREATE DATABASE suraj")
#con.commit()
#c.execute("CREATE TABLE info(name varchar(20),age varchar(20), city varchar(20) ,id int(11))")
#con.commit()
#c.execute("SHOW TABLES ")
#for x in c:
	#print(x)
#c.execute("INSERT INTO info VALUES('RAM','20','kanpur',1)")
#con.commit()
c.execute("SELECT *FROM info")
for x in c:
	print(x)

#insert multiple data in table------>
#query="INSERT INTO info(name,age,city,id) VALUES(%s,%s,%s,%s)"
#data=[('shyam','21','kanpur',2),('sita','22','kanpur',3),('geeta','21','kanpur',4),('radha','22','kanpur',5)]
#c.executemany(query,data)
#con.commit()
#c.execute("SELECT *FROM info")
#for x in c:
#	print(x)

#update and delete data from table---->>
#c.execute("UPDATE info SET name='Shyam singh' WHERE id=2")
#con.commit()
#c.execute("SELECT *FROM info")
#for x in c:
	#print(x)
#c.execute("ALTER TABLE info ADD email varchar(200)")
#con.commit()

for i in range(1,6):
	ans=input("enter email:-+")
	c.execute(f"UPDATE info SET email='mno' WHERE  id={i+1}")
con.commit()
c.execute("SELECT *FROM info")
for x in c:
	print(x)
