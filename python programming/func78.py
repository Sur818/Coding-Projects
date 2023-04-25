def automorphic_no(n):
	m=int(n)*int(n)
	m=str(m)
	if m.endswith(n):
		return True
	else:
		return False

n=int(input("enter range:-"))
for i in range(1,n+1):
	if automorphic_no(str(i)):
		print(i)