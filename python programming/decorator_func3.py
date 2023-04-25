def decor(wish):
	def inner(name):
		if name=="pawan"or name=="durgesh":
			wish(name)
		else:
			print("hello",name,"good morning")
	return inner


@decor
def wish(name):
	print("hello",name,"good night")
	
wish("suraj")
wish("pawan")
wish("ashwani")
wish("durgesh")
wish("chandresh")
wish("sandeep")