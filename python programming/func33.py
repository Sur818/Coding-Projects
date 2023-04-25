def factor(n):
	list=[]
	for i in range(1,int(n/2)):
		if n%i==0:
			list.append(i)
	return list

n=int(input("enter no:-"))
print("factor of given no:-")
print(factor(n))