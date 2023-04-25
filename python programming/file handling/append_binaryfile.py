import pickle
def create_file():
	f=open("bin_append.dat",'wb')
	pickle.dump(["hello user"],f)


def append_data():
	f=open("bin_append.dat",'ab')
	pickle.dump(["hello word"],f)

def read_file():
	f=open("bin_append.dat",'rb')
	while True:
		try:
			a=pickle.load(f)
			print(a)
		except:
			break
	

create_file()
append_data()
read_file()
