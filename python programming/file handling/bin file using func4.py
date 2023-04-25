import pickle
def create_file():
	f=open("file54.txt",'r')
	a=f.readlines()
	f=open("bin4_func.dat",'wb')
	pickle.dump(a,f)

def read_file():
	f=open("bin4_func.dat",'rb')
	a=pickle.load(f)
#	print(a)
	c=0
	for x in a:
		c+=1
	return c

create_file()
print(read_file())