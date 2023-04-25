def count_digit(l):
	dict={}
	for x in l:
		dict[x]=len(str(x))
	return dict
	
l=eval(input("enter list:-"))
print(count_digit(l))
	

		
	
	