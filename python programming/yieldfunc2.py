def func(l):
	for n in l:
		yield n+1
x=func(list(range(100,110)))
for i in x:
	print(i)
