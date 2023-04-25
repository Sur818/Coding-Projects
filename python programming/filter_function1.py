#filter(func,seq)
def func(a):
	if a>20:
		return True
l=[10,20,30,40]

print(list(filter(func,l)))