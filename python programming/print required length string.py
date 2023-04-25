def extract_list(l,length):
	return list(filter(lambda x:True if len(x)==length else False,l))




l=eval(input("enter data:-"))
length=int(input("enter requirment  of length:-"))
print(extract_list(l,length))