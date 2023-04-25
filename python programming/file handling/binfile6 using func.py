import pickle
def create_file():
	f=open("file54.txt",'r')
	a=f.readlines()
	f=open("bin6_func.dat",'wb')
	pickle.dump(a,f)

def read_file():
	f=open("bin6_func.dat",'rb')
	a=pickle.load(f)
	for x in a:
		print(x,end="")
	print("\n")
	print("longest line in this text is:-w")
	length=[len(i) for i in a]
	return a[length.index(max(length))]
	


create_file()
print(read_file())
