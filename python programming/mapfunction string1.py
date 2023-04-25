def func(a):
	return a[::-1]
s=input("enter string:-").split(' ')
print(list(map(func,s)))