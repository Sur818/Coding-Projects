def duck_no(s):
	if s[0]=='0':
		return False
	elif s[1::].count('0')!=0:
		return True
	else:
		return False
n=input("enter no:-")
if duck_no(n):
	print("yes duck no:-")
else:
	print("not duck no")