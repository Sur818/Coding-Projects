def buzz_no(s):
	if int(s[-1])==7 and int(s)%7==0:
		return True
	else:
		return False
n=int(input("enter range:-"))
for i in range(1,n+1):
	if buzz_no(str(i)):
		print(i)