import csv
def create_file():
	f=open("data8.csv",'w')
	head=['srno','name','age','contact']
	dw=csv.DictWriter(f,fieldnames=head)
	dw.writeheader()
	dw.writerow({'srno':1,'name':'shyam','age':22,'contact':9838788823})
	dw.writerows([{'srno':2,'name':'ram','age':20,'contact':98569837}])

def read_file():
	f=open("data8.csv",'r')
	rd=csv.DictReader(f)
	for x in rd:
		for y in x:
			print(x[y],end=' ')
		print()
		
		
print("enter 1 to create_file():-")
print("enter 2 to read file():-")
op=int(input("enter choice:-"))
if op==1:
	create_file()
if op==2:
	read_file()
else:
	print("invalid input:-")