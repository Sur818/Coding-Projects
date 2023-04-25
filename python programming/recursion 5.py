def table(n,i):
	if i>10:
		return  0
	else:
		print(n,"*",i,"=",n*i)
		table(n,i+1)
n=int(input("enter no:-"))
table(n,1)