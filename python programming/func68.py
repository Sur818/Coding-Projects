def unique_list(l):
	s=set(l)
	return list(s)

l=[]
n=int(input("enter no of items:-"))
for i in range(n):
	data=int(input("enter data:-"))
	l.append(data)
print("unique list are:-",unique_list(l))
