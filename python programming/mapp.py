#map(func,seq)
#return generator so we need to typecast
#we can pass multiple sequecial object .
def func(l):
	return l

l=[10,20,30,40,50]
print(list(map(func,l)))