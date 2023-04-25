def sum_digits(l):
	res=0
	for x in l:
		if type(x)==int:
			res+=sum(list(map(int,str(x))))
	return res
	




l=eval(input("enter data:-"))
print(sum_digits(l))