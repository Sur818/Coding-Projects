def remove_None(l):
	for x in l:
		if x==None:
			l.remove(None)
	if l[-1]==None:
		l.remove(None)
	return l

"""""""""""""""""""""""""""""""
def remove_None(l):
	return [x for x in l if x is not None]

def remove_None(l):
	ans=list(filter(None,l))
	return ans
"""""""""""""""""""""""""""""""
l=eval(input("enter list:-"))
print(remove_None(l))

