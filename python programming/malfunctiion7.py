def sum_rec(a):
	sum=0
	for x in a:
		if type(x) is list:
			sum+=sum_rec(x)
		else:
			sum+=x
	return sum


def func(a):
	sum=0
	if type(a)==type([]):
		sum+=sum_rec(a)
	else:
		sum+=a
	return sum
		

l=[10,20,[[30,40],[10,50]],50,60,[70]]
print(list(map(func,l)))