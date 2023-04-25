def duck_no(s):
	if s[0]=='0':
		return False
	elif s[1::].count('0')!=0:
		return True
	else:
		return False
n=int(input("enter range:-"))
for i in range(1,n+1):
	if duck_no(str(i)):
		print(i)