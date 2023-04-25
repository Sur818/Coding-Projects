def swap(l,i,j):
	temp=l[i]
	l[i]=l[j]
	l[j]=temp	

def max_no(l):
	for i in range(len(l)):
		for j in range(i+1,len(l)):
			if int(l[i]+l[j])<int(l[j]+l[i]):
				swap(l,i,j)
	return "".join(l)
	
	
	
l=input("enter no in list:-").split(' ')
print(eval(max_no(l)))

#time complexity=o(n^2)
			