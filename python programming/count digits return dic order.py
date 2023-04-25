def count_digit(l):
	dict={}
	for x in l:
		dict[x]=f'{len(set(str(x)))}diff digits'
	return dict
	
l=eval(input("enter list:-"))
print(count_digit(l))