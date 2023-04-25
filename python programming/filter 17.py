def map_func(a):
	a.sort()
	return a


l=[['green', 'orange'], ['black', 'white'], ['white', 'black', 'orange']]
#print(list(map(map_func,l)))
print(list(map(lambda x:sorted(x),l)))
