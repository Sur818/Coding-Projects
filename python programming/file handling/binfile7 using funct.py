import pickle
ans=0
def no_unique(x):
	x=x.split(' ')
	c=0
	for l in x:
		if len(l)==len(set(l)):
			c+=1
	return c
	
	
def create_file():
	f=open("file54.txt",'r')
	a=f.readlines()
	f=open("bin7_func.dat",'wb')
	pickle.dump(a,f)
	
def read_file():
	f=open("bin7_func.dat",'rb')
	for x in (pickle.load(f)):
		print(x,end="")
	print("\n")
	
def show_linehasmax_uniquew():
	global ans
	f=open("bin7_func.dat",'rb')
	a=pickle.load(f)
	for x in a:
		if no_unique(x)>ans:
			ans=max(ans,no_unique(x))
			result=x
	return result

create_file()
read_file()
print("show line which has max unique_ word:-")
print(show_linehasmax_uniquew())
		
		
		