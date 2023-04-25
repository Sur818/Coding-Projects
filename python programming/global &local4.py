def wish():
	global a
	a=10
	print(a)
wish()
#print(a)
#print(globals())
print(locals()['a'])