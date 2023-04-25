import pickle
def create_file():
	f=open("binfile9_using function.txt",'r')
	a=f.readlines()
	f=open("binfile9_func.dat",'wb')
	pickle.dump(a,f)

def read_file():
	f=open("binfile9_func.dat",'rb')
	a=pickle.load(f)
	for x in a:
		print(x,end="")

def delete_line(n):
	l=[]
	f=open("binfile9_func.dat",'rb')
	a=pickle.load(f)
	for i in range(len(a)):
		if i!=n-1:
			l.append(a[i])
	f=open("binfile9_func.dat",'wb')
	pickle.dump(l,f)
			
			
		

create_file()
read_file()
n=int(input("\n\nenter line no want to delete:-"))
delete_line(n)
print("\nafter deleting that line:-\n")
read_file()