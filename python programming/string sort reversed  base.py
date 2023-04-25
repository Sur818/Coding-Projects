def sort_baserev(l):
	return sorted(l,key=lambda x:x[::-1])
	
l=eval(input("enter data:-"))
print(sort_baserev(l))