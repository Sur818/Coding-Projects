import pickle
def create_file():
	f=open("bin2_func.dat",'wb')
	pickle.dump(input("enter text in file:-"),f)
	
def read_file():
	f=open("bin2_func.dat",'rb')
	a=pickle.load(f)
	print(a)

def capitallizefirst_file():
	f=open("bin2_func.dat",'rb')
	a=pickle.load(f).split(' ')
	for x in a:
		i=a.index(x)
		x=x[0].upper()+x[1::]
		a[i]=x
	f=open("bin2_func.dat",'wb')
	pickle.dump(" ".join(a),f)

create_file()
read_file()
capitallizefirst_file()
print("after modification:-")
read_file()

		
	