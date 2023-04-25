def spyno(sum,prod,s,i):
	if i>len(s)-1:
		if sum==prod:
			return True
		else:
			return False
	return spyno(sum+int(s[i]),prod*int(s[i]),s,i+1)
n=int(input("enter range:-"))
for i in range(1,n+1):
		if spyno(0,1,str(i),0):
			print(i)

