def is_unique(l):
	if len(l)==len(set(l)) and (min(l)>-10000 and max(l)<10000):
		return True
	else:
		return False


l=list(map(int,input("enter list:-").split(' ')))
if is_unique(l):
	print("True")
else:
	print("False ")