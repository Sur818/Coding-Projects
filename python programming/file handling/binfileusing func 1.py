import pickle

def create_file():
	f=open("func_bin1",'wb')
	pickle.dump(input("enter statement:-"),f)

def read_file():
	f=open("func_bin1",'rb')
	a=pickle.load(f)
	print(a)

create_file()
read_file()
	
	