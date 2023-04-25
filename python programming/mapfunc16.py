def func(a):
	if type(a)==type([]):
		return a
	else:
		return a+1

l=[10,20,[30,40],50,60,[70]]
print(list(map(func,l)))