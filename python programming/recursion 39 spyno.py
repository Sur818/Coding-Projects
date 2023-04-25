def spyno(sum,prod,s,i):
	if i>len(s)-1:
		if sum==prod:
			return True
		else:
			return False
	return spyno(sum+int(s[i]),prod*int(s[i]),s,i+1)
n=input("enter no:-")
if spyno(0,1,n,0):
	print("spy no:-")
else:
	print("not")
