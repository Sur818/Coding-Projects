a=10
def wish(a):
	print(a)
	print(globals()['a'])

wish(20)
#print(locals())
#print(globals())