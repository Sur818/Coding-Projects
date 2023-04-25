def iscomposite(n):
	f=0
	for i in range(1,n+1):
		if n%i==0:
			f+=1
	if f>2:
		return True
	else:
		False
	
l=input("enter no:-").split(' ')
print("list of composite no:-")
print(list(filter(lambda x: True if iscomposite(int(x)) else False  ,l)))