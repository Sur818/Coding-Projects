def buzz_no(s):
	if int(s[-1])==7 and int(s)%7==0:
		return True
	else:
		return False
n=int(input("enter no:-"))
if buzz_no(str(n)):
	print("buzz no:-")
else:
	print("not buzz no:-")