def func(a):
	return a.upper(),a.lower()


s={'a','b','c','d','e','f','a','b'}
print("after removing duplicate charector and convert uppercase and lowercase element")
print(list(map(func,s)))