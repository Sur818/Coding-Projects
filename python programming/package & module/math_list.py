def add_list(l):
	sum=0
	for x in l:
		sum+=x
	return sum
	
def prod_list(l):
	prod=1
	for x in l:
		prod*=x
	return prod
	
def max_list(l):
	temp=l[0]
	for x in l:
		if x>temp:
			temp=x
	return temp
	
def sort_list(l):
	for i in range(len(l)):
		for j in range(len(l)-1):
				if l[j]>l[j+1]:
					temp=l[j]
					l[j]=l[j+1]
					l[j+1]=temp
	
	return l
		
	
	
