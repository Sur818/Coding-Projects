import mysql.connector
con=mysql.connector.connect(
host='localhost',
user='root',
password='root',
db='newstudent'

)
c=con.cursor()
#c.execute("CREATE DATABASE newstudent")
n=int(input("how many student information want to store:-"))
c.execute("CREATE TABLE student_information (stu_name varchar(20),age int(10),roll_no int(11))")
for i in range(n):
	stu_name=input("enter  student name:-")
	age=int(input("enter age:-"))
	roll_no=int(input("enter roll_no:-"))
	c.execute(f"INSERT INTO 	student_information VALUES('{stu_name}','{age}','{roll_no}')")
	

