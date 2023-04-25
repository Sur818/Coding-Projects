def reqlength_string(l,length):
	return [x for x in l if len(x)==length]
	
	
l=eval(input("enter data in list:-"))
length=int(input("enter required length :-"))
print(reqlength_string(l,length))