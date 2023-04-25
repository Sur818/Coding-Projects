def digit_no(s):
	s=s[-1]+s[1:-1]+s[0]
	return s

n=input("enter no:-")
print(digit_no(n))