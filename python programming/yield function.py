def func(l):
	for x in l:
		yield x+1

			
print(list(func([x for x in range(100,200)])))