def spyno(s):
	sum=0
	prod=1
	for x in s:
		sum+=int(x)
	for x in s:
		prod*=int(x)
	if sum==prod:
		return True
	else:
		return False



n=input("enter no:-")
if spyno(n):
	print("spy no:-")
else:
	print("not spy no:-")