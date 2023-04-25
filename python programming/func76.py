def automorphic_no(n):
	m=int(n)*int(n)
	m=str(m)
	if m.endswith(n):
		return True
	else:
		return False
	
n=input("enter no:-")
if automorphic_no(n):
	print("yes it is automorphic no:-")
else:
	print("not automorphic no")