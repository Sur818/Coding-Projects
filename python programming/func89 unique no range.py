def unique_no(s):
	l=list(s)
	st=set(l)
	if len(st)==len(s):
		return True
	else:
		return False
n=int(input("enter no:-"))
for i in range(1,n+1):
	if unique_no(str(i)):
		print(i)