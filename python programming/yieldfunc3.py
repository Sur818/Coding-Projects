def func():
	n=0
	while True:
		n+=1
		yield n
x=list(func)
print(x)