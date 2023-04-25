import pickle
def create_file():
	f=open("bin3_func.dat",'wb')
	pickle.dump(input("enter text in file:-"),f)
	
def read_file():
	f=open("bin3_func.dat",'rb')
	a=pickle.load(f)
	print(a)

def replace_pertword():
	f=open("bin3_func.dat",'rb')
	a=pickle.load(f)
	word=input("enter word which want to replace:-")
	newword=input("enter new word:-")
	a=a.replace(word,newword)
	f=open("bin3_func.dat",'wb')
	pickle.dump(a,f)
	


create_file()
read_file()
replace_pertword()
read_file()
