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
	
n=int(input("enter range:-"))
for i in range(1,n+1):
	if spyno(str(i)):
		print(i)
	