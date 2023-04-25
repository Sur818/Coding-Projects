def check_perticuler(latter):
	f=open("Story1.txt",'r')
	a=f.readlines()
	for line in a:
		if line[0]==latter.upper() or line[0]==latter.lower():
			print(line,end="")
latter=input("enter latter want to check for line begining with this:--")
check_perticuler(latter)
		